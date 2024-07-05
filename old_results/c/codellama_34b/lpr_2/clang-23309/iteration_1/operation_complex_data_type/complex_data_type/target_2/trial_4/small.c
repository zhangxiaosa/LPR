c
#include <stdio.h>

int fn1(int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int p = 3L;
  int t = 0;
  int v = 0;
  short w = 3;
  unsigned char ac = 1L;

  while (w) {
    unsigned short an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    unsigned long ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(1L, an), 0xECL), t) & 1UL)
      v = 1;
  }

  fn1(p);
  return 0;
}
