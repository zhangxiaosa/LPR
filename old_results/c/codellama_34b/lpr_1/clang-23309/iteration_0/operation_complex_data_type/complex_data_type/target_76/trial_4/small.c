c
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
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1L;
u_char fn10(short, short);
u_char fn11(u_char, short, short, short);
u_char fn12_inlined(short, short, u_char, short);

short fn13() {
  fn10(u, t);
  return 1UL;
}

u_char fn10(short p1, short p2) {
  fn11(2L, 0x2F2F6D26L, p2, 1);
  return 0x2F2F6D26L;
}

u_char fn11(u_char p1, short p2, short p3, short p4) {
  short al = 3L;
  short am = 1L;
  short an = 250UL;
  for (w = 3; w; w--) {
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn6(am, an)), p2) & 1)
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
