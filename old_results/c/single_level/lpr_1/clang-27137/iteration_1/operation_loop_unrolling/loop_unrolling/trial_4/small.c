#include <stdio.h>

unsigned h;
short o;

int main() {
  short q;
  int i;
  short r = o;
  q = r;
  int s = 1L;

  // Unrolled loop (10 iterations)
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

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}