#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

d fn4(d p1, d p2) { return p1; }

f p;

void fn8(p1) { p = p1; }

void fn9(g p1, char *p2, int p3) { p = p1; }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn10(g, e);
d fn11(d, f, b, e);

b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

d fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (((ao - fn4((am - an), 0xECL)) - p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}