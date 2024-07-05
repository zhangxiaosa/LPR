#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

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

a fn12(b p1, b p2, d p3, a p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (((ao - fn4(fn6(am, an), 0xECL)) - p2) & 1UL)
        v = 1UL;
    } else {
      c ai = 7L;
      e aj = 1UL;
      al = 3L;
      am = 1L;
    }
  return al;
}

int main() {
  int ap = 0;
  e ae = 1UL;
  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      f p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (((ao - fn4(fn6(am, an), 0xECL)) - p2) & 1UL)
        v = 1UL;
    } else {
      c ai = 7L;
      e aj = 1UL;
      al = 3L;
      am = 1L;
    }
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", v);
  return 0;
}