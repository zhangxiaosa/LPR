
#include <stdio.h>

// Decompose variables into primary data types

int x1;
unsigned int x2;
short x3;
unsigned short x4;
int x5;
unsigned int x6;

void fn1(int p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

long fn3(long p1, long p2) {
  return p1 - p2;
}

int fn4(int p1, int p2) {
  return p1;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int p;

void fn9(unsigned int p1, char *p2, int p3) {
    p = p1;
}

unsigned int t;
unsigned int u;
unsigned int v;
unsigned int w;
unsigned int ab;
unsigned long ac = 1L;

short fn10(unsigned int, int);
short fn11(long, int, int, int);
short fn12(int, int, long, short, unsigned int);

int fn13() {
  int ae = 1UL;
  fn10(u, t);
  return ae;
}

short fn10(unsigned int p1, int p2) {
  short d = 0x2F2F6D26L;
  int ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}

short fn11(long p1, int p2, int p3, int p4) {
  unsigned int ai = 7L;
  int aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

short fn12(int p1, int p2, long p3, short p4, unsigned int p5) {
  int al = 3L;
  unsigned int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
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
