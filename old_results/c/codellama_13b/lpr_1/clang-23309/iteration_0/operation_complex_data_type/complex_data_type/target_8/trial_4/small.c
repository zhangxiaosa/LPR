
#include <stdio.h>
#include <stdlib.h>

int b;
long c;
unsigned short d;
short e;
unsigned f;
unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3_clone(long p1, long p2) { return p1 - p2; }

short fn4(short p1, short p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
unsigned short w;
unsigned short ab;
short ac = 1L;
unsigned short fn10(unsigned g, short);
unsigned short fn11(unsigned d, unsigned f, short, short);
short fn12(unsigned, unsigned, unsigned, short, unsigned);
unsigned short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned short fn10(unsigned g p1, short p2) {
  short af = 0x2F2F6D26L;
  unsigned short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned short fn11(unsigned d p1, unsigned f p2, short p3, short p4) {
  unsigned ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned p1, unsigned p2, unsigned short p3, short p4, unsigned p5) {
  unsigned short al = 3L;
  unsigned am = 1L;
  unsigned an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) {
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
