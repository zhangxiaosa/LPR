#include <stdio.h>

int main() {
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;

  // Loop unrolling
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  printf("checksum = %X\n", q);
  return 0;
}