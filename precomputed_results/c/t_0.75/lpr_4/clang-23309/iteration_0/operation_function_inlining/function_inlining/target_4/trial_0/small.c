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

void fn9(g p1, char *p2, int p3) { p = p1; }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

b main() {
  for (w = 3; w; w -= 1) {
    b al = 3L;
    c am = 1L;
    b an;
    if (an = 250UL) {
      t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((an = 250UL) & 1UL)
        v = 1UL;
    }
  }
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}