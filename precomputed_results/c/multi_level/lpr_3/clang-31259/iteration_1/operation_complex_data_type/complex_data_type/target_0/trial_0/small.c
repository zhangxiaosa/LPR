#include <stdio.h>

signed ad_1[][5][7] = {{8}, {8}, {{8}, 0x98}};
signed ad_2[5][7] = ad_1[0];
signed ad_3[5][7] = ad_1[1];
signed ad_4[7] = ad_1[2];
signed ad_5 = ad_4[0];
signed ad_6 = ad_4[1];
signed ad_7 = ad_4[2];
signed ad_8 = ad_4[3];
signed ad_9 = ad_4[4];

signed fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;

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
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    return ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  return 0;
}