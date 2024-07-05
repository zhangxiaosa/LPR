#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
long v = 1UL;  // Optimized assignment

short w = 3;  // Optimized loop initialization
short ac = 1L;

int main() {
  long am = 1L;
  unsigned an = 250UL;  // Optimized assignment

  unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;  // Optimized assignment
  short ao = 0xBCD1L;

  if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL) {
    v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);

  return 0;
}
