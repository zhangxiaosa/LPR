
#include <stdio.h>
#include <stdlib.h>

int fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3_clone(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short w;
unsigned short x;
unsigned short y;
unsigned short z;
unsigned short ab;
short ac = 1L;
unsigned long fn10(unsigned long p1, short p2) {
  long af = 0x2F2F6D26L;
  unsigned long ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned long fn11(unsigned long p1, unsigned long p2, short p3, short p4) {
  unsigned long ai = 7L;
  unsigned long aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned long p1, unsigned long p2, unsigned long p3, short p4, unsigned long p5) {
  unsigned long al = 3L;
  unsigned long am = 1L;
  unsigned long an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      x = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned short ao = 0xBCD1L;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), x) & 1UL) {
        v = 1UL;
      }
    }
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
