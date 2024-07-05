#include <stdio.h>

unsigned p;
long v;
short w;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int main() {
  int an;

  // Unrolled loop iteration 1
  w = 3;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECL)) - ac & 1UL) {
      v = 1UL;
    }
  }

  // Unrolled loop iteration 2
  w = 2;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECL)) - ac & 1UL) {
      v = 1UL;
    }
  }

  // Unrolled loop iteration 3
  w = 1;
  if (an = 250UL) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - (fn6(1L, an) - 0xECL)) - ac & 1UL) {
      v = 1UL;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}