#include <stdio.h>

typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned int fn5(unsigned int p1, unsigned int p2) { return p1; }
f s;
unsigned int u;
int v;
static unsigned int w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

signed fn9() {
  e ah = 3U;
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn2(1, fn5(255U, fn2(ah, u--))), 4294967295);
    return ae;
  }
}

int main() {
  int i;
  fn9();
  for (i = 0; i < 7; i++)
    s = s ^ ad[i][1][0];
  printf("checksum = %x\n", s);
  return 0;
}