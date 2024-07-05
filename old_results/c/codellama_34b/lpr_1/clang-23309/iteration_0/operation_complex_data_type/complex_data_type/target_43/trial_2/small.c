
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2;
}

short fn5(short p1, short p2) {
  return p2;
}

short fn6(short p1, short p2) {
  return p1 - p2;
}

short p;

void fn9(short p1, char *p2, int p3) {
  p = p1;
}

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

u_char fn12(short p1, short p2, u_char p3, short p4, short p5) {
  short al = 3L;
  short am = 1L;
  short an;
  const int constant = 250UL;
  for (w = 3; w; w -= 1) {
    an = constant * (w - 1);
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
