
#include <stdio.h>

typedef unsigned char u_char;

void fn1(u_char p1, int p2) { printf("checksum = %X\n", p1); }

u_char fn2(u_char p1, u_char p2) { return p1 - p2; }

u_char fn3(u_char p1, u_char p2) { return p1 - p2; }

u_char fn5(u_char p1, u_char p2) { return p2; }

u_char fn6(u_char p1, u_char p2) { return p1 - p2; }

u_char p;

void fn9(u_char p1, char *p2, int p3) { p = p1; }

u_char t;
u_char u;
u_char v;
u_char w;
u_short ab;
u_char ac = 1L;
u_char fn10(u_char, u_char);
u_char fn11(u_char, u_char, u_char, u_char);
u_char fn12(u_char, u_char, u_char, u_short, u_short);

u_char fn13() {
  u_char ae = 1UL;
  fn10(u, t);
  return ae;
}

u_char fn10(u_char p1, u_char p2) {
  u_char af = 0x2F2F6D26L;
  u_char ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

u_char fn11(u_char p1, u_char p2, u_char p3, u_char p4) {
  u_char ai = 7L;
  u_char aj = 1UL;
  fn12(ai, aj, p1, 0, p1);
  return aj;
}

u_char fn12(u_char p1, u_char p2, u_char p3, u_short p4, u_short p5) {
  u_char al = 3L;
  u_char am = 1L;
  u_char an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    u_char ao = 0xBCD1L;
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
