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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

 int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  //engine_start();


word_t expr(char *e, bool *success);  // 在这里声明 expr 函数
/*  FILE *file = fopen("input","r");
if (!file) {
        perror("Failed to open input file");
        return 1;
    }

    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        // 去掉行末的换行符
        line[strcspn(line, "\n")] = 0;

        // 分割结果和表达式
        char *expected_str = strtok(line, " ");
        char *expr_str = strtok(NULL, "");

        if (expected_str && expr_str) {
            int expected_value = atoi(expected_str);
            bool success;
            word_t result = expr(expr_str, &success);

            if (success) {
                if (result == expected_value) {
                    printf("Expression: %s = %d [Correct]\n", expr_str, result);
                } else {
                    printf("Expression: %s = %d [Incorrect, expected %d]\n", expr_str, result, expected_value);
                }
            } else {
                printf("Expression: %s [Error in evaluation]\n", expr_str);
            }
        }
    }
    fclose(file);
*/
  engine_start();
  return is_exit_status_bad();
}

