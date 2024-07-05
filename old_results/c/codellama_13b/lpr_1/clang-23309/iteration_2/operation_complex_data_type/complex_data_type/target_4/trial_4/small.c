
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

long ac = 3L;

short ab;

long fn12(long p1, long p2, short p4, unsigned p5) {
  long an = 250UL;
  w = 3UL;
  if (an == 0x294A85636008822DLL)
    v = 1UL;
  return 3L;
}

int fn13() {
  short ae = 1UL;
  fn12(ae, ae, 0UL, 2UL);
  return ae;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
