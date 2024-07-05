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

  w = 3;

  // Unroll iteration 1
  if (w != 0) {
    an = 250UL;
    t = (an == 0x294A85636008822DLL);
    short ao = 0xBCD1L;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }
  w -= 1;

  // Unroll iteration 2
  if (w != 0) {
    an = 250UL;
    t = (an == 0x294A85636008822DLL);
    short ao = 0xBCD1L;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }
  w -= 1;

  // Unroll iteration 3
  if (w != 0) {
    an = 250UL;
    t = (an == 0x294A85636008822DLL);
    short ao = 0xBCD1L;
    if (ao - fn4(1L - an) - t & 1UL)
      v = 1UL;
  }
  w -= 1;

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}