#include <stdio.h>

int loop_var; // New looping variable

int main() {
  int q;
  int s = 1L;

  q = loop_var;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > s)
      q -= 1;

  if (loop_var = q)
    ;

  loop_var = loop_var;
  printf("checksum = %X\n", q);
  return 0;
}