#include <stdio.h>

unsigned p;
long v;
short w;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int fn13() {
  int an;

  // Unrolled loop with constant values: w = 3, w = 2, w = 1
  if (an = 250UL) {
    unsigned p2;
    short ao = 0xBCD1L;

    // Loop iteration with w = 3
    p2 = ac || (an = 3) == 0x294A85636008822DLL;
    if ((ao - (1L - 0xECL)) - p2 & 1UL)
      v = 1UL;

    // Loop iteration with w = 2
    p2 = ac || (an = 2) == 0x294A85636008822DLL;
    if ((ao - (1L - 0xECL)) - p2 & 1UL)
      v = 1UL;

    // Loop iteration with w = 1
    p2 = ac || (an = 1) == 0x294A85636008822DLL;
    if ((ao - (1L - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return 0x2F2F6D26L;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}