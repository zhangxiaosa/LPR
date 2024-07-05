c
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

short fn6(short p1, short p2) { return p1 - p2; }

int p;

void fn9(unsigned p1, char *p2, int p3) { p = p1; }

unsigned v;

short w;

short ab;

long ac = 3L;

short fn12(long p1, long p2, long p3, short p4, unsigned p5) {
  long an;
  an = w;
  return 3L;
}

int fn13() {
  short ae = 1UL;
  fn12(ae, ae, 2L, 0, 2L);
  return ae;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
