#ifndef WATCHPOINT_H
#define WATCHPOINT_H

#define  NR_WP 32

typedef struct watchpoint {
	int NO;
	struct watchpoint *next; 
  uint32_t value;
	char exp[500];
	/* TODO: Add more members if necessary */  

} WP;

void init_wp_pool();
WP* new_wp(char *exp);
void free_wp(WP *wp);

#endif

