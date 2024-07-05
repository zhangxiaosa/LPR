
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

void fn9(short p1, char *p2) { p = p1; }

short t;
unsigned char u;
short v;

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}

short fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

unsigned char fn10(short p1, short p2) {
  short af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  short am = 1;
  short al = 3;
  if (fn2(fn3(0xBCD1, fn6(am, 250)), p2) & 1)
    v = 1;
  return al;
}
