#include <stdio.h>

unsigned p;
long v;
short w;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int fn13() {
  int af = 0x2F2F6D26L;
  long am = 1L;
  unsigned an;

  for (w = 3; w; w -= 1) {
    unsigned p2 = ac || w == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - (am - 250UL - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return af;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}