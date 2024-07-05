
#include <stdio.h>

int fn1(int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

int p;

void fn9(unsigned int p1, char *p2, int p3) { p = p1; }

int t;
int u;
unsigned v;
short w;
short ab;
unsigned long ac = 1L;

short fn10(unsigned int, unsigned char);
short fn11(unsigned long, unsigned char, unsigned char, unsigned char);
short fn12(unsigned char, unsigned char, unsigned long, unsigned short, unsigned int);

int fn13() {
  unsigned long ae = 1UL;
  fn10(u, t);
  return ae;
}

short fn10(unsigned int p1, unsigned char p2) {
  unsigned short d = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

short fn11(unsigned long p1, unsigned char p2, unsigned char p3, unsigned char p4) {
  unsigned ai = 7L;
  unsigned char aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(unsigned char p1, unsigned char p2, unsigned long p3, unsigned short p4, unsigned int p5) {
  unsigned char al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned char ao = 0xBCD1L;
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

