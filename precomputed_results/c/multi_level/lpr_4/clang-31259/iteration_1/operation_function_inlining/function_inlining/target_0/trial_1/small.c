#include <stdio.h>

int fn4(int p1, int p2) { return 1 % p2; }

int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

int main() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = 1 % (u--);

    return ae;
  }

  int i, j, k;
  for (i = 0; i < 6; i += 2) {
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];

    printf("s_unrolled_iter_1 = %X\n", s);
  }

  return 0;
}
