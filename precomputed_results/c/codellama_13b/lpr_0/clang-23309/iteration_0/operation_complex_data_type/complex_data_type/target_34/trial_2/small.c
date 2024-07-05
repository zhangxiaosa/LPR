
#include <stdio.h>

// Functions
int fn2(int p1, short p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
unsigned short fn5(unsigned short p1, unsigned short p2) { return p2; }
unsigned short fn6(unsigned char p1, unsigned short p2) { return p1 - p2; }

// Variables
unsigned long p;
unsigned short t;
unsigned short u;
unsigned long v;
unsigned short w;
unsigned long ab;
unsigned long ac = 1L;

int fn13() {
  unsigned short ae = 1UL;
  fn10(u, t);
  return ae;
}
unsigned short fn10(int p1, unsigned short p2) {
  int af = 0x2F2F6D26L;
  unsigned short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
unsigned short fn11(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4) {
  long ai = 7L;
  unsigned short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
unsigned short fn12(long p1, long p2, unsigned char p3, unsigned short p4, unsigned long p5) {
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
