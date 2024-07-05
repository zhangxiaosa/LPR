
#include <stdio.h>

int fn1(unsigned long p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned long p1, unsigned long p2) {
  return p1;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int p;
int t;
int v;
short w;
unsigned char ac = 1L;

int fn13() {
  int al = 3L;
  short an = (short)((0x294A85636008822DLL >> 32) & 0xFFFFFFFF);
  short ao = 0xBCD1L;
  if (fn2(ao - fn4(fn6(1L, an), 0xECL), t) & 1UL)
    v = (short)(((0x294A85636008822DLL >> 32) & 0xFFFFFFFF) / 2);
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
