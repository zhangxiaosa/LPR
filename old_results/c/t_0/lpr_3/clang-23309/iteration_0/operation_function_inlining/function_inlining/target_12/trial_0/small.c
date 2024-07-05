#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

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
  e ae = 1UL;
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    {
      c ai = 7L;
      e aj = 1UL;
      {
        b al = 3L;
        c am = 1L;
        b an;
        for (w = 3; w; w -= 1)
          if (an = 250UL) {
            ab = ac || (an = w) == 0x294A85636008822DLL;
            a ao = 0xBCD1L;
            if (fn2(fn3(ao, fn4(ao - an, 0xECL)), ab) & 1UL)
              v = 1UL;
          }
      }
      return aj;
    }
  }
}

int main() {
  int ap = 0;
  {
    b al = 3L;
    c am = 1L;
    b an;
    for (w = 3; w; w -= 1)
      if (an = 250UL) {
        ab = ac || (an = w) == 0x294A85636008822DLL;
        a ao = 0xBCD1L;
        if (fn2(fn3(ao, fn4(ao - an, 0xECL)), ab) & 1UL)
          v = 1UL;
      }
    al;
  }
  p = p1; // Inlined code from fn9
  fn1(p, ap);
  return 0;
}