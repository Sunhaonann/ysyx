#include <common.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <device/map.h> 
#include <isa.h>
#define MAX_IRINGBUF 16

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;

ItraceNode iringbuf[MAX_IRINGBUF];
int p_cur = 0;
bool full = false;

void trace_inst(word_t pc, uint32_t inst) {
  iringbuf[p_cur].pc = pc;
  iringbuf[p_cur].inst = inst;
  p_cur = (p_cur + 1) % MAX_IRINGBUF;
  full = full || p_cur == 0;
}

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void display_inst() {
  if (!full && !p_cur) return;
  int end = p_cur;
  int i = full?p_cur:0;

  char buf[128]; // 128 should be enough!
  char *p;
   printf("Most recently executed instructions");
  do {
    p = buf;
    p += sprintf(buf, "%s" FMT_WORD ": %08x ", (i+1)%MAX_IRINGBUF==end?" --> ":"     ", iringbuf[i].pc, iringbuf[i].inst);
 //   disassemble(p, buf+sizeof(buf)-p, iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);
    //close instr_tracer error Just comment
    if ((i+1)%MAX_IRINGBUF==end) printf(ANSI_FG_RED);
    puts(buf);
  } while ((i = (i+1)%MAX_IRINGBUF) != end);
  puts(ANSI_NONE);
}

void display_pread(paddr_t addr, int len) {
  printf("pread at " FMT_PADDR " len=%d\n", addr, len);
}

void display_pwrite(paddr_t addr, int len, word_t data) {
  printf("pwrite at " FMT_PADDR " len=%d, data=" FMT_WORD "\n", addr, len, data);
}
  
//ftrace
typedef struct {
    char name[64];
    paddr_t addr;      //the function head address
    Elf32_Xword size;
} Symbol;

Symbol *symbol = NULL;  //dynamic allocate memory  or direct allocate memory (Symbol symbol[NUM])
int func_num = 0;

void parse_elf(const char *elf_file)
{
    
    if(elf_file == NULL) return;
    
    FILE *fp;
    fp = fopen(elf_file, "rb");
    
    if(fp == NULL)
    {
        printf("failed to open the elf file!\n");
        exit(0);
    }
	
    Elf32_Ehdr edhr;
	//读取elf头
    if(fread(&edhr, sizeof(Elf32_Ehdr), 1, fp) <= 0)
    {
        printf("fail to read the elf_head!\n");
        exit(0);
    }

    if(edhr.e_ident[0] != 0x7f || edhr.e_ident[1] != 'E' || 
       edhr.e_ident[2] != 'L' ||edhr.e_ident[3] != 'F')
    {
        printf("The opened file isn't a elf file!\n");
        exit(0);
    }
    
    fseek(fp, edhr.e_shoff, SEEK_SET);

    Elf32_Shdr shdr;
    char *string_table = NULL;
    //寻找字符串表
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        
        if(shdr.sh_type == SHT_STRTAB)
        {
            //获取字符串表
            string_table = malloc(shdr.sh_size);
						 if (string_table == NULL){
		         printf("fail to allocate memory for the strtab\n");
		         exit(0);
						        }
            fseek(fp, shdr.sh_offset, SEEK_SET);
            if(fread(string_table, shdr.sh_size, 1, fp) <= 0)
            {
                printf("fail to read the strtab\n");
                exit(0);
            }
        }
    }
    
    //寻找符号表
    fseek(fp, edhr.e_shoff, SEEK_SET);
    
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }

        if(shdr.sh_type == SHT_SYMTAB)
        {
            fseek(fp, shdr.sh_offset, SEEK_SET);

            Elf32_Sym sym;

            size_t sym_count = shdr.sh_size / shdr.sh_entsize;
            symbol = malloc(sizeof(Symbol) * sym_count);
            if (symbol == NULL)
	             {
	          printf("fail to allocate memory for symbols\n");
					  exit(0);
			         }
            for(size_t j = 0; j < sym_count; j++)
            {
                if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }

                if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
                {
                    const char *name = string_table + sym.st_name;
                    strncpy(symbol[func_num].name, name, sizeof(symbol[func_num].name) - 1);
						  			 symbol[func_num].name[sizeof(symbol[func_num].name) - 1] = '\0'; // Ensure null-termination
                    symbol[func_num].addr = sym.st_value;
                    symbol[func_num].size = sym.st_size;
								 //	printf("Parsed symbol: %s at 0x%08x with size %lu\n", symbol[func_num].name, symbol[func_num].addr, symbol[func_num].size);
                    func_num++;
                }
            }
        }
    }
    fclose(fp);
    free(string_table);
}

int rec_depth = 1;
void display_call_func(word_t pc, word_t func_addr)
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(func_addr >= symbol[i].addr && func_addr < (symbol[i].addr + symbol[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", pc);

    for(int k = 0; k < rec_depth; k++) printf("  ");

    rec_depth++;
    if(i < func_num){
    printf("call  [%s@0x%08x]\n", symbol[i].name, func_addr);
    }
		else{printf("call [unknown@0x%08x]\n",func_addr);}
}

void display_ret_func(word_t pc)
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(pc >= symbol[i].addr && pc < (symbol[i].addr + symbol[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", pc);

    rec_depth--;

    for(int k = 0; k < rec_depth; k++) printf("  ");
 if (i < func_num){
    printf("ret  [%s]\n", symbol[i].name);
}
else {printf("ret  [unknown]\n");}
}

//        ***end**
void trace_dread(void *addr, int len, IOMap *map) {
		 printf("dtrace: Drive Name = %s : read address = %p at pc = "FMT_WORD" with byte = %d\n",
		map->name, addr, cpu.pc,len);
}

void trace_dwrite(void* addr, int len, word_t data, IOMap *map) {
		printf("dtrace: Drive Name = %s : write address = %p at pc = "FMT_WORD" with byte = %d and data = "FMT_WORD" \n",
	  map->name, addr,cpu.pc, len, data);
}

