
#include <stdio.h>

int fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned long p;

void fn9(unsigned long p1, char *p2, int p3) { p = p1; }

unsigned t;
unsigned f u;
unsigned v;
unsigned w;
unsigned ab;
unsigned long ac = 1L;

unsigned fn10(unsigned long, unsigned);
unsigned fn11(long, unsigned, unsigned, unsigned);
unsigned fn12(unsigned, unsigned, long, unsigned, unsigned long);

unsigned fn13() {
  unsigned long ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned fn10(unsigned long p1, unsigned p2) {
  unsigned short d = 0x2F2F6D26L;
  unsigned long ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

unsigned fn11(long p1, unsigned p2, unsigned p3, unsigned p4) {
  unsigned ai = 7L;
  unsigned aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

unsigned fn12(unsigned p1, unsigned p2, long p3, unsigned p4, unsigned long p5) {
  unsigned al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned long ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
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
