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
  unsigned p2;
  short ao = 0xBCD1L;

  for (w = 3; w; w -= 1) {
    if (250UL) {
      p2 = ac || (250 == 0x294A85636008822DLL);

      if ((ao - (fn6(am, 250) - 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  }

  return af;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
