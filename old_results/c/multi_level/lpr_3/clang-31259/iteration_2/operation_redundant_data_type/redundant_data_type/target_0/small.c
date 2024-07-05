#include <stdio.h>

signed fn4(signed p1, signed p2) { return (signed)p1 % (signed)p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
signed v;
static unsigned w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
signed af;

signed fn9() {
  signed ai[2];
  signed i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255U, u--)), 4294967295U);
    return (signed)ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}
