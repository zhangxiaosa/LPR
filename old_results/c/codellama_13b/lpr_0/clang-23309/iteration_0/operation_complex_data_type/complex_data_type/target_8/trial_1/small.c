c
#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned g;

unsigned int fn2(unsigned int p1, unsigned int p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
e fn5(e p1, e p2) { return p2; }
e fn6(e p1, e p2) { return p1 - p2; }
e p;
void fn9(g p1, char *p2, int p3) { p = p1; }
int t;
e u;
c v;
a w;
e ab;
a ac = 1L;
d fn10(unsigned int, unsigned short);
d fn11(unsigned int, unsigned int, unsigned short);
a fn12(unsigned int, unsigned int, unsigned char, a, g);
int fn13() {
  unsigned short ae = 1UL;
  fn10(u, t);
  return ae;
}
d fn10(unsigned int p1, unsigned short p2) {
  unsigned int af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
d fn11(unsigned int p1, unsigned int p2, unsigned short p3, unsigned short p4) {
  unsigned int ai = 7L;
  unsigned short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
a fn12(unsigned int p1, unsigned int p2, unsigned char p3, a p4, g p5) {
  unsigned int al = 3L;
  unsigned int am = 1L;
  unsigned int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
