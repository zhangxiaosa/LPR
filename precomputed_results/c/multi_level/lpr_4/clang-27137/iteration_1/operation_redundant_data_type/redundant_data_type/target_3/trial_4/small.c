#include <stdio.h>

short p;

int main() {
  short q;
  int s = 1L;
  short loop_var; // New looping variable

  p = q;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > s)
      q -= 1;

  if (p == q)
    ;

  p = p;
  printf("checksum = %X\n", p);
  return 0;
}