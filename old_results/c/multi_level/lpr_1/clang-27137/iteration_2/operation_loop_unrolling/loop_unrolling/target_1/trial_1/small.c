#include <stdio.h>

int main() {
  int i;
  short r = 0;
  short accumulator = r;

  // Loop unrolling
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;
  accumulator -= 1;

  r = accumulator;

  printf("checksum = %X\n", r);
  return 0;
}