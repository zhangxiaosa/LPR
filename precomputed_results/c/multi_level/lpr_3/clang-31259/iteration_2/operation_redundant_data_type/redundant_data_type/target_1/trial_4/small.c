#include <stdio.h>

short fn4(short p1, short p2) { return (short)p1 % (short)p2; }

unsigned short fn5(unsigned short p1, unsigned short p2) { return p1; }

unsigned short s;
unsigned u;
short v;
static unsigned w = 254U;
short ad[][5][7] = {{8}, {8}, {{8}, 0x98}};

short fn9() {
  short ai[2];
  short i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (v = 6; v >= 0; v -= 1)
      u = ai[0] ^= ad[w + 1][w][v] = fn4(fn5(1, fn5(255U, u--)), 4294967295U);
    return (short)s;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}