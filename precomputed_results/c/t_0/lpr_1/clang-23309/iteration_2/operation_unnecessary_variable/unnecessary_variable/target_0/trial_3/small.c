#include <stdio.h>

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned p;
int t;
short w;
long ac = 1L;

int main() {
  short ao;

  for (w = 3; w; w -= 1) {
    t = ac;
    ao = 0xBCD1L;
    if (fn3(ao, -2L) - t & 1UL)
      p = 1UL;
  }

  printf("checksum = %X\n", p);
  return 0;
}