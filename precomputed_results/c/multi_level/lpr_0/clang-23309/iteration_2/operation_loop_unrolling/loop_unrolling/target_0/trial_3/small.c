#include <stdio.h>

unsigned p;
long v;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int main() {
  int an;
  short w;
  unsigned p2;

  w = 3;

  // Unrolled loop 1
  an = w;
  p2 = ac || (an == 0);
  if ((0xBCD1L - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
    v = 1UL;

  // Unrolled loop 2
  w--;
  an = w;
  p2 = ac || (an == 0);
  if ((0xBCD1L - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
    v = 1UL;

  // Unrolled loop 3
  w--;
  an = w;
  p2 = ac || (an == 0);
  if ((0xBCD1L - (fn6(1L, an) - 0xECL)) - p2 & 1UL)
    v = 1UL;

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}