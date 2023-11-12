#include <stdio.h>

long f;
short g;
short a = 1;

int main() {
  int c = 0;
  short d;
  
  // Iteration 1
  d = 0xBCD1;
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;

  // Iteration 2
  d = 0xBCD1;
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;

  // Iteration 3
  d = 0xBCD1;
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;

  printf("checksum = %lX\n", f);
  return 0;
}