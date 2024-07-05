
#include <stdio.h>

typedef unsigned char u_char;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

void fn9(short p1, char *p2, int p3) { p = p1; }

short t;
u_char u_char;
short v;
short w_short;
u_char w_char;
short ab;
u_char ac_char;
u_char ac_short;
u_char fn10(short, short);
u_char fn11(u_char, short, short, short);
u_char fn12_inlined(short, short, u_char, short);

short fn13() {
  short ae = 1UL;
  fn10(u_char, t);
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
  fn12_inlined(ai, ai, p1, 0);
  return aj;
}

u_char fn12_inlined(short p1, short p2, u_char p3, short p4) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w_char = 3; w_char; w_char--) {
    an = 250UL;
    p2 = fn5(ab, ac_short) || (an = w_short) == 0x294A85636008822DLL;
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
