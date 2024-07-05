#include <stdio.h>

int s;
static int fn9_w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
int fn9_ai_0;
int fn9_v;

int main() {
  int i = 0, j = 0, k = 0;
  int s = 0;

  for (int w = 1; ;) {
    int ai[2];
    for (int i = 0; i < 2; i++)
      ai[i] = 8;

    for (; i < 5; i++)
      ;

    for (af = 6; af > 0; af -= 1) {
      fn9_v = fn9_ai_0 ^= ad[fn9_w + 1][fn9_w][af] = 1 % 4294967295;
    }

    if (w != 1)
      break;

    w = 0;
    return 0;
  }

  for (i = 0; i < 6; i += 2) {
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];
    printf("s_unrolled_iter_1 = %X\n", s);
  }

  return 0;
}