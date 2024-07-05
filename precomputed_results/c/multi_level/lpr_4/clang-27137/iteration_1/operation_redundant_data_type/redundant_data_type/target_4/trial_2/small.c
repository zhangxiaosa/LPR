#include <stdio.h>

short loop_var; // New looping variable

int main() {
  int s = 1L;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (loop_var > s)
      loop_var -= 1;

  if (loop_var == loop_var)
    ;

  loop_var = loop_var;
  printf("checksum = %X\n", loop_var);
  return 0;
}
