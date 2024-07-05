
#include <stdio.h>

short p;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;

void fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn4(short p1, short p2) {
  return p1 - p2;
}

short t;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;
short fn10(short, short);
unsigned char fn11(unsigned char, short, short, short);

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
  short ai = 7;
  short aj = 1;
  short al = 3;
  short am = 1;
  short an;
  unsigned char au;

  // Unroll the loop 4 times
  while (w < 4) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn4(ao, fn6(am, an)), p2) & 1)
      v = 1;
    w++;
  }

  return al;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
