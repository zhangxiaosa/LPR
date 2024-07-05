
#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned g;

long fn2(int p1, short p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
long fn4(long p1, long p2) { return p1; }
long fn5(long p1, long p2) { return p2; }
long fn6(long p1, long p2) { return p1 - p2; }
long p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }
long t;
long u;
long v;
a w;
long ab;
a ac = 1L;
long fn10(int, short);
long fn11(long, long, b, short);
long fn12(b, b, unsigned char, a, g);
int fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}
long fn10(int p1, short p2) {
  long af = 0x2F2F6D26L;
  long ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
long fn11(long p1, long p2, b p3, short p4) {
  long ai = 7L;
  long aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
long fn12(b p1, b p2, unsigned char p3, a p4, g p5) {
  long al = 3L;
  long am = 1L;
  long an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    long ao = 0xBCD1L;
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
