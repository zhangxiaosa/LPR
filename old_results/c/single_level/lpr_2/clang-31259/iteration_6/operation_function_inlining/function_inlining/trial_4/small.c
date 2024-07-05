#include <stdio.h>

signed fn2(signed p1, signed p2) { return p1; }
short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

int main() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  static unsigned w = 254U;
  signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
  int af;
  unsigned u;
  int v;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    for (af = 6; af >= 0; af -= 1) {
      u--;
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, 3U)), 4294967295U);
    }
    printf("checksum = %X\n", v);
  }

  return 0;
}