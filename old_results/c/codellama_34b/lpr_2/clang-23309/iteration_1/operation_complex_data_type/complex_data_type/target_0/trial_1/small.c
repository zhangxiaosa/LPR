
#include <stdio.h>

int fn1(unsigned int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(int p1, int p2) { return p1 - p2; }

unsigned int fn4(unsigned int p1, unsigned int p2) { return p1; }

int fn6(int p1, int p2) { return p1 - p2; }

int main() {
  unsigned int ac = 1;
  int w;
  int t;
  int v;
  short w;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(fn6(1, an), 0xEC), t) & 1)
      v = 1;
  }
  fn1(v);
  return 0;
}
