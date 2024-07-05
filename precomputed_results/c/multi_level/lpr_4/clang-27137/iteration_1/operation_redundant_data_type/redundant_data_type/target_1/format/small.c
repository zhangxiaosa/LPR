#include <stdio.h>

short o;
char p;

int main() {
  short q;
  int s = 1L;
  short loop_var; // New looping variable

  q = o;

  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > s)
      q -= 1;

  if (p = q)
    ;

  o = p;
  printf("checksum = %X\n", o);
  return 0;
}