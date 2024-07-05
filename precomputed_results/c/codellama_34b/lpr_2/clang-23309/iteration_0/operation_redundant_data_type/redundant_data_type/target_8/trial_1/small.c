
#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

int p;
int t;
int v;
int w;
int ab;
int ac;

int fn13() {
  int al = 3;
  int am = 1;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    int ao = 0xBCD1;
    if (fn2(ao - fn4(fn6(am, an), 0xECL), t) & 1)
      v = 1;
  }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
  return 0;
}
