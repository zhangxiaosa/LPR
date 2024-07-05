
#include <stdio.h>

void fn1(s_short p1, int p2) { printf("checksum = %X\n", p1); }

s_short fn2(s_short p1, s_short p2) { return p1 - p2; }

s_short fn3(s_short p1, s_short p2) { return p1 - p2; }

s_short fn5(s_short p1, s_short p2) { return p2; }

s_short fn6(s_short p1, s_short p2) { return p1 - p2; }

s_short p;

void fn9(s_short p1, char *p2) { p = p1; }

s_short t;
unsigned char u;
s_short v;
unsigned char w;
s_short ab;
unsigned char ac = 1;
unsigned char fn10(s_short, s_short);
unsigned char fn11(unsigned char, s_short, s_short, s_short);

s_short fn13() {
  s_short ae = 1;
  fn10(u, t);
  return ae;
}

unsigned char fn10(s_short p1, s_short p2) {
  s_short af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, s_short p2, s_short p3, s_short p4) {
  s_short ai = 7;
  s_short aj = 1;
  s_short al = 3;
  s_short am = 1;
  s_short an;
  unsigned char au;

  // Unroll the loop 4 times
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    s_short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }

  return al;
}

int main() {
  fn13();
  s_short v;
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
