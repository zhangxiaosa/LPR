
#include <stdio.h>

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
u_char ac = 1;

short fn13() {
  short ae = 1;
  short af = 0x2F2F6D26;
  u_char ag = 248;
  short ai = 7;
  short aj = 1;
  short al = 3;
  short am = 1;
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  return ae;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
