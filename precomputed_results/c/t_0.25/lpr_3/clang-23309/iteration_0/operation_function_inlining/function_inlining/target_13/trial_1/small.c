#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

d fn4(d p1, d p2) {
  return p1;
}

f fn5(f p1, f p2) {
  return p2;
}

f p;

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn10(g, e);
d fn11(d, f, b, e);

b fn13() {
  fn10(u, t);
  return 0x2F2F6D26L;
}

d fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  {
    c ai = 7L;
    e aj = 1UL;
    {
      b al = 3L;
      c am = 1L;
      b an;
      if (an = 250UL) {
        p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
      }
      al;
    }
    aj;
  }
  return af;
}

d fn11(d p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  {
    b al = 3L;
    c am = 1L;
    b an;
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
    }
    al;
  }
  return aj;
}

int main() {
  fn10(u, t);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}