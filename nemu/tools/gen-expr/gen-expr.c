/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static void gen_rand_expr();
static void gen_num();
static void gen_op();
static void gen_rand_expr_recursive(int depth);

// Generate a random number and append it to buf
static void gen_num() {
    char num[32];
    sprintf(num, "%d", rand() % 100); // Generate a number between 0 and 99
    strcat(buf, num);//用于将一个字符串连接到另一个字符串的末尾
		if (rand() % 2) strcat(buf, " "); // Randomly append a space
}

// Generate a random operator and append it to buf
static void gen_op() {
    char ops[] = "+-*/";
    char op = ops[rand() % 4];
    int len = strlen(buf);
    buf[len] = op;
    buf[len + 1] = '\0';
		if (rand() % 2) strcat(buf, " ");
}
#define MAX_BUF_SIZE 65536
// Generate a random expression recursively
static void gen_rand_expr_recursive(int depth) {
    if (depth > 10 || strlen(buf) > MAX_BUF_SIZE - 50) {
        // To avoid too deep recursion, generate a number if depth is too high
        gen_num();
        return;
    }

    switch (rand() % 3) {
        case 0: gen_num(); break;
        case 1: 
            strcat(buf, "(");
            gen_rand_expr_recursive(depth + 1);
            strcat(buf, ")");
            break;
        default:
            gen_rand_expr_recursive(depth + 1);
            gen_op();
            gen_rand_expr_recursive(depth + 1);
            break;
    }
}

// Generate a random expression
static void gen_rand_expr() {
    buf[0] = '\0'; // Reset buffer
    gen_rand_expr_recursive(0);
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);//使用sscanf函数将第一个参数转换为整数并赋值给loop。argc表示命令行参数的数量，argv是参数数组

  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
