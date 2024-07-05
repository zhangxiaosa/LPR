
#include <stdio.h>

void fn1(unsigned long p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
unsigned long fn3_clone(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned long fn5(unsigned long p1, unsigned long p2) { return p2; }
unsigned long fn6(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned long p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }
int t;
unsigned long u;
unsigned long v;
unsigned short w;
unsigned long ab;
unsigned short ac = 1L;
unsigned long fn10(unsigned long, unsigned short);
unsigned long fn11(unsigned long, unsigned long, unsigned short, unsigned short);
unsigned short fn12(unsigned long, unsigned long, unsigned long, unsigned short, unsigned long);
int fn13() {
  unsigned short ae = 1UL;
  fn10(u, t);
  return ae;
}
unsigned long fn10(unsigned long p1, unsigned short p2) {
  unsigned long af = 0x2F2F6D26L;
  unsigned long ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
unsigned long fn11(unsigned long p1, unsigned long p2, unsigned short p3, unsigned short p4) {
  unsigned long ai = 7L;
  unsigned long aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
unsigned short fn12(unsigned long p1, unsigned long p2, unsigned long p3, unsigned short p4, unsigned long p5) {
  unsigned long al = 3L;
  unsigned long am = 1L;
  unsigned long an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned short ao = 0xBCD1L;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
