
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

void fn9(short p1, char *p2) { p = p1; }

short fn13() { return 1UL; }

int main() {
  short t = 0;
  short v = 0;
  short u = 0;
  short w = 0;
  short ab = 248UL;
  short ac = 1L;
  short ao = 0xBCD1L;
  short am = 0x294A85636008822DLL;
  short an = 0x2F2F6D26L;

  t = w - v;
  v = u - 1;
  u = t + 1;
  w = ab || (an = w) == 0x294A85636008822DLL;

  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
