
#include <stdio.h>

typedef int c;
typedef int g;

g fn2(g p1, g p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

typedef int f;
typedef int e;

e fn10(g p1, e p2) {
  e af = 0x2F2F6D26L;
  e ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

e fn11(unsigned char p1, f p2, e p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

e fn12(unsigned char p1, unsigned char p2, c p3, e p4, g p5) {
  c al = 3L;
  c am = 1L;
  c an;
  for (unsigned char w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(p5, p4) || (an = w) == 0x294A85636008822DLL;
      e ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        return 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn10(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
