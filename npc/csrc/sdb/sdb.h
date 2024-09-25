#ifndef __SDB_H__
#define __SDB_H__

#include "../common.h"

#define INSTRUCTION_LOG_BUF_SIZE 4096

typedef struct 
{
  char *name;
  uint32_t start_addr;
  uint32_t end_addr;
} SymbolFunc;

word_t expr(char *e, bool *success);
void init_sdb(const char* elf_file);
void sdb_set_batch_mode();
void sdb_mainloop();
void cpu_exec(int);

#ifdef CONFIG_ITRACE
void instruction_ring_buffer_init();
void instruction_ring_buffer_write();
void instruction_ring_buffer_push(word_t code, word_t pc);
#endif

#ifdef CONFIG_FTRACE
void ftrace_init(const char *elf_file);
void ftrace_close();
void ftrace_exec(uint32_t pc_before, uint32_t pc_after, int rd, bool is_jal);
#endif
#ifdef CONFIG_TRACE
void trace_exec(uint32_t pc, uint32_t instr);
#endif
#ifdef CONFIG_DTRACE
void dtrace_read(const char* name, uint32_t addr, uint32_t data);
void dtrace_write(const char* name, uint32_t addr, uint32_t data);
#endif

#endif
