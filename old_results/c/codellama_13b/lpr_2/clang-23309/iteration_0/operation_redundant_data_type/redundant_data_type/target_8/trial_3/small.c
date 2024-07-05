
#include <stdio.h>

typedef long c;

c fn2(c p1, c p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

c fn4(c p1, c p2) { return p1; }

c fn5(c p1, c p2) { return p2; }

c fn6(c p1, c p2) { return p1 - p2; }

c p;

void fn7(c p1) { p = p1; }

void fn9(c p1, char *p2, int p3) { fn7(p1); }

c t;

c u;

c v;

c w;

c ab;

c ac = 1L;

c fn10(c, c);

c fn11(c, c, c, c);

c fn12(c, c, c, c, c);

c fn13() {
  c ae = 1UL;
  fn10(u, t);
  return ae;
}

c fn10(c p1, c p2) {
  c af = 0x2F2F6D26L;
  c ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

c fn11(c p1, c p2, c p3, c p4) {
  c ai = 7L;
  c aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

c fn12(c p1, c p2, c p3, c p4, c p5) {
  c al = 3L;
  c am = 1L;
  c an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      c ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
