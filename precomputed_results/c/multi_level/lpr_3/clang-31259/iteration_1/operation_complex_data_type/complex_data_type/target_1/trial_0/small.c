#include <stdio.h>

signed fn2(signed p1, signed p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
unsigned ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

unsigned int fn9() {
  unsigned int ai[2];
  unsigned int i;
  for (i = 0; i < 5; i++) {
    ai[i] = 8U;
  }
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn5(1, fn5(255U, fn2(3U, u--))), 4294967295U);
    return ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %u\n", s);
  return 0;
}