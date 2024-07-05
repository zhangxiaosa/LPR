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

d fn10(g, e);
d fn11(d, f, b, e);

b fn13() {
  for (w = 3; w; w -= 1)
    if (250UL) {
      p2 = 1UL;
      if (((0xBCD1L - (((1L - 250UL) - 0xECL) - 0xECL)) - (ab - ac)) & 1UL)
        1UL;
    }
  v = 1UL;
  p2 = 1UL;
  return 1UL;
}

int main() {
  {
    for (w = 3; w; w -= 1)
      if (250UL) {
        p2 = 1UL;
        if (((0xBCD1L - (((1L - 250UL) - 0xECL) - 0xECL)) - (ab - ac)) & 1UL)
          1UL;
      }
    v = 1UL;
    p2 = 1UL;
  }
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}