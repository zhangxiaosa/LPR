#include <stdio.h>

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
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(g p1, char *p2, int p3) { fn8(p1); }
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, b, e);
short fn12(b, b, d, short, g);

b af;
d ag;
c ai;
e aj;
b al;
c am;
b an;

int main() {
  int ap = 0;

  af = 0x2F2F6D26L;
  ag = 248UL;
  ai = 7L;
  aj = 1UL;
  al = 3L;
  am = 1L;
  an = 0;

  d result;

  b af_inlined = 0x2F2F6D26L;
  d ag_inlined = 248UL;
  c ai_inlined = 7L;
  e aj_inlined = 1UL;
  for (w = 3; w; w -= 1) {
    if (an == 250UL) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if ((fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), ab) & 1UL) != 0) {
        v = 1UL;
      }
    }
  }

  result = aj_inlined;

  printf("checksum = %X\n", result);

  return 0;
}
