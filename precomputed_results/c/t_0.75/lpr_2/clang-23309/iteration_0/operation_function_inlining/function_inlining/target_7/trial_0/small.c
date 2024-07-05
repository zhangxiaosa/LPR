#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

c fn3(c p1, c p2) { return p1 - p2; }

f fn5(f p1, f p2, d p3) { return p2; }

f fn6(f p1, f p2, d p3) { return p1 - p2; }

f p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

a fn12(b p1, b p2, d p3, a p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac, p1) || (an = w) == 0x294A85636008822DLL || p1;
      a ao = 0xBCD1L;
      if ((ao - (fn6(am, an, p1) - 0xECL)) - p2 & 1UL)
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
  b t;
  f u;
  c v;
  a w;
  f ab;
  a ac = 1L;

  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      f p2 = fn5(ab, ac, t) || (an = w) == 0x294A85636008822DLL || t;
      a ao = 0xBCD1L;
      if ((ao - (fn6(am, an, t) - 0xECL)) - p2 & 1UL)
        v = 1UL;
    } else {
      c ai = 7L;
      e aj = 1UL;
      ab = fn3(ai, aj);
      v = 0UL;
      al = fn12(t, t, t, w, 0UL);
      am = al;
    }
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}