
#include <stdio.h>
#include <stdlib.h>

int fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3_clone(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p2; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int p;
void fn9(unsigned int p1, char *p2, int p3) { p = p1; }

int t;
unsigned int u;
unsigned int v;
short w;
unsigned int ab;
short ac = 1L;
unsigned int fn10(unsigned int, short);
unsigned int fn11(unsigned int, unsigned int, short, short);
short fn12(unsigned int, unsigned int, unsigned int, short, unsigned int);
int fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned int fn10(unsigned int p1, short p2) {
  unsigned int af = 0x2F2F6D26L;
  unsigned int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned int fn11(unsigned int p1, unsigned int p2, short p3, short p4) {
  unsigned int ai = 7L;
  unsigned int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned int p1, unsigned int p2, unsigned int p3, short p4, unsigned int p5) {
  unsigned int al = 3L;
  unsigned int am = 1L;
  unsigned int an;
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
