#include <stdio.h>

int loop_var_int;
int q_int;

int main() {
  int q;
  q_int = loop_var_int;
  for (loop_var_int = 0; loop_var_int < 10; loop_var_int++)
    while (q_int > 1L)
      q_int -= 1;
  printf("checksum = %X\n", q_int);
  return 0;
}