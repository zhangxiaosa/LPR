
#include <stdio.h>

unsigned char fn1(unsigned char p1, unsigned char p2) {
  return p1;
}

unsigned int fn2(unsigned int p1, unsigned int p2) {
  return p1 - p2;
}

long fn3(long p1, long p2) {
  return p1 - p2;
}

long fn5(long p1, long p2) {
  return p2;
}

unsigned char fn6(unsigned char p1, unsigned char p2) {
  return p1 - p2;
}

short p;
short t;
unsigned char v;
short w;
long ab;
short ac = 1L;

short fn10(long p1, short p2) {
  short af = 0x2F2F6D26L;
  short ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}

short fn12(short p1, short p2, short p3, short p4, long p5) {
  short al = 3L;
  unsigned char am = 1L;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
