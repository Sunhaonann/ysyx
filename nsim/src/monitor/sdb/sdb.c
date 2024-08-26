/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NSIM is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/vaddr.h"
#include "watchpoint.h"
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nsim) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nsim_state.state = NSIM_QUIT;
	return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(NULL," ");
	int steps = 0;
	if (arg == NULL) {
		cpu_exec(1);
		return 0;
	}
	sscanf(arg,"%d",&steps);
	if(steps < -1){
	printf("Error,N should be greater or equal to -1");
	return 0;
	}
	cpu_exec(steps);
	return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL," ");
  if (strcmp(arg,"r")==0){
	   isa_reg_display();
	}	
	return 0;
}

static int cmd_x(char *args){
  char *arg1 = strtok(NULL," ");
  char *arg2 = strtok(NULL," ");
  unsigned num = 0;
	vaddr_t begin;
	sscanf(arg1,"%d",&num);
	sscanf(arg2,"0x%x",&begin);
	printf("%#08x:\n",begin);
	for (int i=0;i<num;++i){
	  printf("\t0x%08x:%08x\n",begin,vaddr_read(begin,4));
    begin+=4;
	}
	return 0;
}
static int cmd_p(char *args){
 // char *arg = strtok(NULL," ");
	bool success = false ;
	uint32_t ans = expr(args,&success);
  if(success)
		printf("%d\n", ans);
	else 
		printf("function fault!");
  return 0;
}

static int cmd_w(char *args){
 // char *arg = strtok(NULL," ");
  WP *n_wp = new_wp(args);
	printf("watchpoint %d: is set successfully.\n",n_wp->NO);
	return 0;
}
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NSIM", cmd_q },

  /* TODO: Add more commands */
  {"si","Single -step exection",cmd_si},
	{"info","Registor detailed infomation",cmd_info},
	{"x","x N EXPR, print consistant N bytes from the beginning address.", cmd_x},
	{"p","Expression evaluation",cmd_p},
  {"w","watchpoint",cmd_w}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
