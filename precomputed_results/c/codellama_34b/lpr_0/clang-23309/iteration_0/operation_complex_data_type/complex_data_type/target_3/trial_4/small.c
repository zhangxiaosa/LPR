
#include <stdio.h>

typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned int e;
typedef float f;
typedef unsigned long g;

b fn2(int p1, int p2) { return p1 - p2; }
c fn3(long p1, long p2) { return p1 - p2; }
d fn4(char p1, char p2) { return p1; }
f fn5(float p1, float p2) { return p2; }
f fn6(float p1, float p2) { return p2 - p1; }
f p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }
b t;
f u;
c v;
short w;
f ab;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, b, e);
short fn12(b, b, d, short, g);
b fn13() {
  e ae = 2UL;
  fn10(u, t);
  return ae;
}
d fn10(unsigned long p1, e p2) {
  int af = 0x2F2F6D26L;
  float ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
d fn11(char p1, float p2, int p3, e p4) {
  int ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(int p1, int p2, char p3, short p4, unsigned long p5) {
  int al = 3L;
  float am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
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
