#include <stdio.h>

int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 5; i++)
      ;
    v = ai[0] ^= ad[w + 1][w][6] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][5] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][4] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][3] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][2] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][1] = 1 % (u--);
    v = ai[0] ^= ad[w + 1][w][0] = 1 % (u--);
    return ae;
  }
}

int main() {
  int i, j, k;
  fn9();
  for (i = 0; i < 6; i += 2) {
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];
    printf("s_unrolled_iter_1 = %X\n", s);
  }
  return 0;
}
