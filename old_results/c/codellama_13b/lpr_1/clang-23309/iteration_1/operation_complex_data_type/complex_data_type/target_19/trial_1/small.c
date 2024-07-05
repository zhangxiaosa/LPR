
#include <stdio.h>

typedef int b;
typedef unsigned char d;
typedef short f;
typedef unsigned g;

// Function definitions
void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

d fn4(unsigned char p1, unsigned char p2) { return p1; }

f fn5(short p1, short p2) { return p2; }

f fn6(short p1, short p2) { return p1 - p2; }

int p;

void fn9(unsigned long p1, char *p2, int p3) { p = p1; }

int t;
unsigned u;
unsigned v;
short w;
unsigned short ab;
unsigned long ac = 1L;

short fn10(unsigned long p1, short p2) {
  short d = 0x2F2F6D26L;
  unsigned short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

short fn11(long p1, short p2, b p3, short p4) {
  b ai = 7L;
  unsigned short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(b p1, b p2, long p3, short p4, unsigned long p5) {
  b al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(fn4(ab, ac), ac) || (an = w) == 0x294A85636008822DLL;
      unsigned short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn6(1UL, an), 0xECL), p2) & 1UL)
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
