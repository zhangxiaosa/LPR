#include <stdio.h>

int fn3(int p1, int p2) { return 1; }
int fn4(int p1, int p2) { return 1 % p2; }
int u;
int v;
static int w = 254;
signed ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i += 2)
      ;
    for (af = 6; af >= 0; af -= 1) {
      u--;
      v = ai[0] ^= ad1[w + 1][w][af] = 1 % (1 % u--);
    }
    return 0;
  }

  int j;
  int s = 0;
  for (j = 0; j < 5; j++)
    s = s ^ ad1[2][j][0];
  printf("s_unrolled_iter_1 = %X\n", s);
  return 0;
}