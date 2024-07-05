#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

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
      for (w = 3; w; w -= 1) {
        if (an = 250UL) {
          p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
          a ao = 0xBCD1L;
          if (((ao - (fn6(am, an))) - p2) & 1UL)
            v = 1UL;
        }
      }
      return al;
    }
    aj;
  }
  return af;
}

b fn13() {
  {
    c ai = 7L;
    e aj = 1UL;
    {
      b al = 3L;
      c am = 1L;
      b an;
      for (w = 3; w; w -= 1) {
        if (an = 250UL) {
          t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
          a ao = 0xBCD1L;
          if (((ao - (fn6(am, an))) - t) & 1UL)
            v = 1UL;
        }
      }
      return al;
    }
    aj;
  }
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}