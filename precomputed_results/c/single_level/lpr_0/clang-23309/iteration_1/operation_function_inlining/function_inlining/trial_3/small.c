#include <stdio.h>

typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

f p;
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;

// Inlined functions
void inline_fn9(g p1) {
  fn7(p1);
}

void inline_fn8(g p1) {
  fn7(p1);
}

void inline_fn7(g p1) {
  p = p1;
}

b inline_fn13() {
  fn10(u, t);
  return 1UL;
}

d inline_fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

d inline_fn11(d p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short inline_fn12(b p1, b p2, d p3, short p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

void inline_fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

int main() {
  int ap = 0;
  inline_fn13();
  inline_fn7(v);
  inline_fn7(v);
  inline_fn7(v);
  printf("checksum = %X\n", p);
  return 0;
}
