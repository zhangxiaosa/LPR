#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

d fn10(g, e);

d fn11(d, f, b, e);

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
      f p1 = ac;
      f p2 = 1UL;
      f p1_minus_p2 = p1 - p2;
      for (w = 3; w; w -= 1)
        if (an = 250UL) {
          p2 = p1_minus_p2 || (an = w) == 0x294A85636008822DLL;
          a ao = 0xBCD1L;
          if (fn2(fn3(ao, fn4(am * an, 0xECL)), p2) & 1UL)
            v = 1UL;
        }
      return al;
    }
    return aj;
  }
}

int main() {
  int ap = 0;
  fn10(u, t);
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", t);
  return 0;
}