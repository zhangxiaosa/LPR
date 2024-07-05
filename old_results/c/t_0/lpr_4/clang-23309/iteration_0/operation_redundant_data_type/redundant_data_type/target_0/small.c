#include <stdio.h>

typedef int b;
typedef long c;
typedef char d;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f p;
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;
d fn10(g, short);
d fn11(d, f, b, short);
short fn12(b, b, d, short, g);
b fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}
d fn10(g p1, short p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
d fn11(d p1, f p2, b p3, short p4) {
  c ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(b p1, b p2, d p3, short p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (ao - fn4(am - an, 0xECL) - p2 & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p, 0);
  return 0;
}