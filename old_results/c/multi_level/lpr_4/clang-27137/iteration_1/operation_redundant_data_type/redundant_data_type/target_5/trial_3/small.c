#include <stdio.h>

int loop_var; // New looping variable

int main() {
  int q;

  q = loop_var;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > 1)
      q -= 1;

  if (loop_var = q)
    ;

  loop_var = loop_var;
  printf("checksum = %X\n", q);
  return 0;
}