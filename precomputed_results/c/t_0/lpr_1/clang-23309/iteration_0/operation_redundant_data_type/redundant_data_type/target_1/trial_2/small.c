#include <stdio.h>

typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f p;
int t;
unsigned u;
long v;
short w;
short ac = 1L;

unsigned char fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  long am = 1L;
  int an;
  for (short w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if ((ao - (am - an)) - p2 & 1UL)
        v = 1UL;
    }
  }
  return af;
}

int fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

void main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
}