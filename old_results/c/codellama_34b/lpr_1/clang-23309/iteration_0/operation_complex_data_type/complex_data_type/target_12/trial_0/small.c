
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
u_char fn12(short, short, u_char, short, short);

short fn13() {
  short ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(short p1_lo, short p1_hi, short p2_lo, short p2_hi, short p3_lo, short p3_hi, short p4_lo, short p4_hi) {
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2_lo, p2_hi, p3_lo, p3_hi);
  return af;
}

u_char fn11(u_char p1_lo, short p2_lo, short p2_hi, short p3_lo, short p3_hi, short p4_lo, short p4_hi) {
  short ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1_lo, p1_hi, p2_lo, p2_hi, p3_lo, p3_hi, p4_lo, p4_hi);
  return aj;
}

u_char fn12(short p1_lo, short p1_hi, short p2_lo, short p2_hi, short p3_lo, short p3_hi, short p4_lo, short p4_hi, short p5_lo, short p5_hi) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
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
