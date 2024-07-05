
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

void fn9(short p1, char *p2, int p3) { p = p1; }

short t;
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1L;
u_char fn10(short, short);
u_char fn11(u_char, short, short, short);

short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(short p1, short p2) {
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, short p2, short p3, short p4) {
  short ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
