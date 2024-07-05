#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }

f p;
b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

a fn12(b, b, d, a, g);

b fn13() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - (fn6(am, an) - 0xECL)) - u & 1UL)
        v = 1UL;
    }
  return af;
}

int main() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - (fn6(am, an) - 0xECL)) - u & 1UL)
        v = 1UL;
    }
  g p1 = v;
  char *p2 = "g_170";
  int p3 = 0;
  f p1_copy = p1;
  p = p1_copy; // Inlined fn7 call
  printf("checksum = %X\n", p);
  return 0;
}