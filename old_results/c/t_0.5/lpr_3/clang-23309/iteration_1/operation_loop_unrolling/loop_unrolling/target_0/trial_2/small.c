#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned v;
short w;
short ac = 1;
int main() {
  long am = 1L;
  int an;

  if (an = 250UL) {
    unsigned p2 = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    unsigned p2 = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    unsigned p2 = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  printf("checksum = %X\n", v);
  return 0;
}
