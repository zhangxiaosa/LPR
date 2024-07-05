
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(s_short p1, int p2) { printf("checksum = %X\n", p1); }

s_short fn2(s_short p1, s_short p2) { return p1 - p2; }

s_short fn3(s_short p1, s_short p2) { return p1 - p2; }

s_short fn5(s_short p1, s_short p2) { return p2; }

s_short fn6(s_short p1, s_short p2) { return p1 - p2; }

s_short p;

void fn9(s_short p1, char *p2, int p3) { p = p1; }

s_short t;
unsigned char u;
s_short v;
unsigned char w;
s_short ab;
unsigned char ac = 1L;
unsigned char fn10(s_short, s_short);
unsigned char fn11(unsigned char, s_short, s_short, s_short);
unsigned char fn12(s_short, s_short, unsigned char, s_short, s_short);

s_short fn13() {
  s_short ae = 1UL;
  fn10(u, t);
  return ae;
}

unsigned char fn10(s_short p1, s_short p2) {
  s_short af = 0x2F2F6D26L;
  unsigned char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, s_short p2, s_short p3, s_short p4) {
  s_short ai = 7L;
  s_short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

unsigned char fn12(s_short p1, s_short p2, unsigned char p3, s_short p4, s_short p5) {
  s_short al = 3L;
  s_short am = 1L;
  s_short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    s_short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1UL)
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
