
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
unsigned char w;
short ab;
unsigned char ac = 1;
unsigned char fn10(short, short);
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
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
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

/* Decomposition of `p99` into primary data types */

short p99;

unsigned char p99_u = 0x2F;
unsigned char p99_v = 0x6D;
unsigned char p99_w = 0x26;

short p99_t = 0xBCD1;
short p99_ab = 0x294A;
short p99_ac = 0x8563;
short p99_ao = 0x6008;
short p99_an = 0x822D;

void p99_fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

short p99_fn2(short p1, short p2) {
  return p1 - p2;
}

short p99_fn3(short p1, short p2) {
  return p1 - p2;
}

short p99_fn5(short p1, short p2) {
  return p2;
}

short p99_fn6(short p1, short p2) {
  return p1 - p2;
}

void p99_fn9(short p1, char *p2) {
  p99 = p1;
}

short p99_t;
unsigned char p99_u;
short p99_v;
unsigned char p99_w;
short p99_ab;
unsigned char p99_ac = 1;
unsigned char p99_fn10(short, short);
unsigned char p99_fn11(unsigned char, short, short, short);

short p99_fn13() {
  short p99_ae = 1;
  p99_fn10(p99_u, p99_t);
  return p99_ae;
}

unsigned char p99_fn10(short p1, short p2) {
  short p99_af = 0x2F2F6D26;
  unsigned char p99_ag = 248;
  p99_fn11(2, p99_ag, p2, 1);
  return p99_af;
}

unsigned char p99_fn11(unsigned char p1, short p2, short p3, short p4) {
  short p99_ai = 7;
  short p99_aj = 1;
  short p99_al = 3;
  short p99_am = 1;
  short p99_an;
  unsigned char p99_au;

  // Unroll the loop 4 times
  for (p99_w = 3; p99_w; p99_w--) {
    p99_an = 250;
    p2 = p99_fn5(p99_ab, p99_ac) || (p99_an = p99_w) == 0x294A85636008822D;
    short p99_ao = 0xBCD1;
    if (p99_fn2(p99_fn3(p99_ao, p99_fn6(p99_am, p99_an)), p2) & 1)
      p99_v = 1;
  }

  return p99_al;
}

int main() {
  p99_fn13();
  p99_fn9(p99_v, "g_170");
  p99_fn1(p99, 0);
  return 0;
}
