
#include <stdio.h>

int fn1(int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;
int t;
int v;
short w;
unsigned char ac = 1L;

int fn13() {
  int al = 3L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    unsigned long ao = 0xBCD1L;
    if (ao - fn4(fn6(1L, an), 0xECL) & 1UL)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
