#include <stdio.h>

signed fn2(signed p1, signed p2) { return p1; }
short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % 4294967295U; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

signed fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    return ae;
  }
}

int main() {
  int i, j;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      s = s ^ ad[i][j][0];
  printf("checksum = %X\n", s);
  return 0;
}