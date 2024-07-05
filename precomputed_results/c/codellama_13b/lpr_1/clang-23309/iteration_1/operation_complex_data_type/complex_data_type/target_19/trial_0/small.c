
#include <stdio.h>

int fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int p;

void fn9(unsigned long p1, char *p2, int p3) { p = p1; }

int t;
unsigned u;
unsigned v;
short w;
unsigned long ac = 1L;

int fn10(unsigned long p1, int p2) {
  short d = 0x2F2F6D26L;
  int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

int fn11(long p1, int p2, int p3, int p4) {
  unsigned ai = 7L;
  int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

int fn12(int p1, int p2, long p3, short p4, unsigned long p5) {
  int al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(u, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn10(u, t);
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
