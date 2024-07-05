
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

int main() {
  int ap = 0;
  short ae = 1UL;
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  short ai = 7L;
  short aj = 1UL;
  short al = 3L;
  short am = 1L;
  short an = 250UL;
  short ao = 0xBCD1L;
  short ap = 0;
  short aq = 0;
  short ar = 0;

  for (w = 3; w; w -= 1) {
    an = 250UL;
    p = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(ao, fn6(am, an)), p) & 1UL)
      v = 1UL;
  }

  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
