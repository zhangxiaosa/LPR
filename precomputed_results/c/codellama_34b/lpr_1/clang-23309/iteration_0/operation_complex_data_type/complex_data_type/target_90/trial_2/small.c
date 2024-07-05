
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

unsigned char fn2(unsigned char p1, unsigned char p2) { return p1 - p2; }

unsigned char fn3(unsigned char p1, unsigned char p2) { return p1 - p2; }

unsigned char fn5(unsigned char p1, unsigned char p2) { return p2; }

unsigned char fn6(unsigned char p1, unsigned char p2) { return p1 - p2; }

unsigned char p;

void fn9(unsigned char p1, char *p2) { p = p1; }

unsigned char t;
unsigned char u;
unsigned char v;
unsigned char w;
unsigned char ab;
unsigned char ac = 1;
unsigned char fn10(unsigned char, unsigned char);
unsigned char fn11(unsigned char, unsigned char, unsigned char, unsigned char);

unsigned char fn13() {
  unsigned char ae = 1;
  fn10(u, t);
  return ae;
}

unsigned char fn10(unsigned char p1, unsigned char p2) {
  unsigned char af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4) {
  unsigned char ai = 7;
  unsigned char aj = 1;
  unsigned char al = 3;
  unsigned char am = 1;
  unsigned char an;
  unsigned char au;

  // Unroll the loop 4 times
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned char ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned char ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned char ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    unsigned char ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }

  return al;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
