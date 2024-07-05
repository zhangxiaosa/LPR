
#include <stdio.h>
#include <stdint.h>

int fn1(unsigned char p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int p;
int t;
int v;
short w;
short ac = 1L;

int fn13() {
  int al = 3L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    int x = ao - (fn6(1L, an) & 0xECL);
    if (x & 1UL)
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
