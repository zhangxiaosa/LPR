#include <stdio.h>

char p;

int main() {
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;

  // Loop unrolling - repeat the loop body 10 times
  while (q > s) {
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
  }

  if (p = q)
    ;
  printf("checksum = %X\n", p);
  return 0;
}