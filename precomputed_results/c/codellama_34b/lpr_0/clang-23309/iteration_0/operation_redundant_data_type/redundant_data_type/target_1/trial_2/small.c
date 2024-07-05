
#include <stdio.h>
#include <stdint.h>

typedef int32_t b;
typedef uint32_t c;
typedef unsigned char d;
typedef short e;

b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
b fn5(b p1, b p2) { return p2; }
b fn6(b p1, b p2) { return p2 - p1; }

void fn9(c p1, char *p2, int p3) { p = p1; }

b t = 1UL;
b u = 2L;
b v = 3L;
short w = 4L;

b fn10(c p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

d fn11(d p1, e p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(b p1, b p2, d p3, short p4, c p5) {
  b al = 3L;
  c am = 1L;
  b an = 250UL;
  short ao = 0xBCD1L;
  if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
    v = 1UL;
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
