#include <stdio.h>

int fn2(int p1, int p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
int main() {
  unsigned i;
  int ai[2];
  unsigned j;

  for (j = 0; j < 2; j++)
    ai[j] = 8;

  w = 1;

  ad[w + 1][w][6] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][5] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][4] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][3] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][2] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][1] = fn4(fn2(1, u--), 4294967295U);
  ad[w + 1][w][0] = fn4(fn2(1, u--), 4294967295U);

  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[w + 1][w][af];

  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];

  printf("checksum = %X\n", s);

  return 0;
}