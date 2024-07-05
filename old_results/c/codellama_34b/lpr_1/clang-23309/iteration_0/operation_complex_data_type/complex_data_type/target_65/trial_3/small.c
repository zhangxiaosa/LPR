
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

unsigned char p;

void fn9(short p1, char *p2, int p3) { p = p1; }

short t;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1L;
unsigned char fn10(short, short);
unsigned char fn11(unsigned char, short, short, short);
unsigned char fn12_inlined(short, short, unsigned char, short);

unsigned char fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned char fn10(short p1, short p2) {
  short af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  short ai = 7L;
  short aj = 1UL;
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

unsigned char fn12_inlined(short p1, short p2, unsigned char p3, short p4) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w--) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
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
