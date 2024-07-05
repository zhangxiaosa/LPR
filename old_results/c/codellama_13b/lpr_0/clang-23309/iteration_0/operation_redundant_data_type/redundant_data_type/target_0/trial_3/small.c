
#include <stdio.h>

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

short fn10(g, e);
short fn11(d, f, b, e);
short fn12(b, b, d, short, g);
short fn13();

void fn9(g, char *, int);

int main() {
  int ap = 0;
  short ab = 0x2F2F6D26L;
  short ag = 248UL;
  short ai = 7L;
  short aj = 1UL;
  short al = 3L;
  short am = 1L;
  short an;
  short ao = 0xBCD1L;

  for (short w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }

  fn10(v, t);
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
