
#include <stdio.h>

typedef unsigned char d;
typedef unsigned f;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
f fn2(f p1, f p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }

f p;
f t;
c v;
short w;
f ab;
short ac = 1L;

f fn13() {
  f al = 3L;
  c am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(am, an), 0xECL), t) & 1UL)
      v = 1UL;
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
