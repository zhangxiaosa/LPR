#include <stdio.h>

unsigned fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned p;
int t;
short w;
short ac = 1L;

int main() {
  int an;
  short ao;

  for (w = 3; w; w -= 1) {
    t = ac;
    ao = 0xBCD1L;

    if (fn3(ao, fn4(1L, 0xECL)) - t & 1UL) {
      p = 1UL;
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}