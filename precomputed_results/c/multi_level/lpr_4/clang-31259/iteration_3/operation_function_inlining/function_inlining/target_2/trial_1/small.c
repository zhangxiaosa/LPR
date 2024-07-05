#include <stdio.h>

int u;
int v;
static int w = 254;
int ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int af;
  ai[0] = 8;
  ai[1] = 8;
  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad1[w + 1][w][af] = 1;
  int s;
  s = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}