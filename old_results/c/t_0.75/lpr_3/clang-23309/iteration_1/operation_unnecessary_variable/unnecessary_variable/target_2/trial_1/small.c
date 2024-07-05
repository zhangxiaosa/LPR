#include <stdio.h>

int fn4(unsigned char p1, unsigned p2) {
  return p1;
}

unsigned p = 0UL;
int t;
long v;
short w;
short ac = 1L;

int main() {
  int an = 3;

  for (w = 3; w; w -= 1) {
    t = 1L;
    short ao = 0xBCD1L;
    if (ao - fn4(1L - an, 0xECL) - t & 1UL) {
      v = 1UL;
    }
  }

  p = 0UL;
  printf("checksum = %X\n", p);
  return 0;
}