
#include <stdio.h>
#include <stdlib.h>

int b;
long c;
unsigned char d;
short e;
unsigned f;
unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3_clone(long p1, unsigned char p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short w;
unsigned ab;
short ac = 1L;

int fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

int fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

int fn11(unsigned p1, unsigned p2, short p3, short p4) {
  unsigned ai = 7L;
  unsigned aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned p1, unsigned p2, unsigned p3, short p4, unsigned p5) {
  unsigned al = 3L;
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
