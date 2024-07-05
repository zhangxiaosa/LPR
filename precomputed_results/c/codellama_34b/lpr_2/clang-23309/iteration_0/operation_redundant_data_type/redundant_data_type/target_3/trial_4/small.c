
#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p2; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int p;
int t;
long v;
short w;
unsigned int ab;
short ac = 1L;

int fn13() {
  int al = 3L;
  long am = 1L;
  short an;
  an = binary_search(ab, ac, 3L);
  short ao = 0xBCD1L;
  if (fn2(ao - fn4(fn6(am, an), 0xECL), an == 0x294A85636008822DLL) & 1UL)
    v = 1UL;
  return al;
}

int main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
  return 0;
}
