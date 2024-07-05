c
#include <stdio.h>

unsigned long fn3(unsigned long p1, unsigned long p2) {
  return p1 - p2;
}

unsigned long fn5(unsigned long p1, unsigned long p2) {
  return p2;
}

unsigned long fn6(unsigned long p1, unsigned long p2) {
  return p2 - p1;
}

unsigned long p;
unsigned long v;
short w = 3;
short ac = 1L;

int main() {
  unsigned long an = 1UL;
  fn12(7L, 7L, 248UL, 0);
  p = fn3(an, 248UL);
  printf("checksum = %X\n", p);
  return 0;
}

int fn12(int p1, int p2, unsigned long p3, short p4) {
  int an;
  if (an = 250UL) {
    fn5(248UL, ac) || (an = w);
    short ao = 0xBCD1L;
    if (fn3(ao, fn6(1L, an)) - p2 & 1UL)
      v = 1UL;
  }
  return 0;
}
