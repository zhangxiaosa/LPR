#include <stdio.h>

int fn4(unsigned char p1) {
  return p1;
}

unsigned p;
int t;
long v;
short w;
short ac = 1L;

int main() {
  int an;
  short ao = 0xBCD1L;

  // Unrolled loop 3 times
  // Iteration 1
  w = 3;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }

  // Iteration 2
  w = 2;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }

  // Iteration 3
  w = 1;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);

  return 0;
}