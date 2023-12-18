#include <stdio.h>

int fn4(int p1, int p2) { return (int)p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

void fn9() {
  int ai[2];
  int i;
  for (i = 0; i < sizeof(ai) / sizeof(ai[0]); i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < sizeof(ai) / sizeof(ai[0]); i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255U, u--)), 4294967295U);
    return;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %d\n", s);
  return 0;
}