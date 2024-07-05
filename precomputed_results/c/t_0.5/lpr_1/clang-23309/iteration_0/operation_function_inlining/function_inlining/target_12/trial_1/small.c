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

f fn6(f p1, f p2) { return p1 - p2; }

f p;

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn11(d p1, f p2, b p3, e p4) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p3 = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p3) & 1UL)
        v = 1UL;
    }
  return al;
}

b fn13() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    b al = 3L;
    c am = 1L;
    b an;
    for (w = 3; w; w -= 1)
      if (an = 250UL) {
        t = ac || (an = w) == 0x294A85636008822DLL;
        a ao = 0xBCD1L;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), t) & 1UL)
          v = 1UL;
      }
    return al;
  }
}

int main() {
  int ap = 0;
  g p1;
  p = p1;
  printf("checksum = %X\n", p);
  return 0;
}