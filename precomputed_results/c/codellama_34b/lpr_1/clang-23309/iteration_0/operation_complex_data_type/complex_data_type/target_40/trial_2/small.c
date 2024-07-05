
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
u_char u;
s_short v;
u_char w;
s_short ab;
u_char ac = 1;
s_short fn10(s_short, s_short);
u_char fn11(u_char, s_short, s_short, s_short);
u_char fn12(s_short, s_short, u_char, s_short, s_short);

s_short fn13() {
  s_short ae = 1;
  fn10(u, t);
  return ae;
}

s_short fn10(s_short p1, s_short p2) {
  s_short af = 0x2F2F6D26;
  u_char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, s_short p2, s_short p3, s_short p4) {
  s_short ai = 7;
  s_short aj = 1;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

u_char fn12(s_short p1, s_short p2, u_char p3, s_short p4, s_short p5) {
  s_short al = 3;
  s_short am = 1;
  s_short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    s_short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
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
