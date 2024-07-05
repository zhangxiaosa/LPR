#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
long v;
short w;
short ac = 1L;
int main() {
  long am = 1L;
  int an;

  if (an = 250UL) {
    unsigned p2 = ac || (an = 3);
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    unsigned p2 = ac || (an = 2);
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    unsigned p2 = ac || (an = 1);
    short ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - ac & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}