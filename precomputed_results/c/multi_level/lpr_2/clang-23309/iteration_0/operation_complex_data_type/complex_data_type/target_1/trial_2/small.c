#include <stdio.h>

typedef long c;

unsigned fn5(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
int t;
c v;
short w;
unsigned ab;
short ac = 1L;

int fn13() {
  c am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    if (an == 250UL) {
      t = fn5(ab, ac);
      an = w;
      if ((0xBCD1L - (fn6(am, an) - 0xECL)) - t & 1UL)
        v = 1UL;
    }
  }
  return 1UL;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}