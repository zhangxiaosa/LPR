#include <stdio.h>

int fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

int s;
int u;
int v;
static int w = 254;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

int fn9() {
  int ah = 3;
  int ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn2(ah, u--)), 4294967295);

    return ae;
  }
}

int main() {
  int i, j, k;
  fn9();

  for (i = 0; i < 6; i += 2) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][j][k];
      }
    }
    printf("s_unrolled_iter_1 = %X\n", s);
  }

  return 0;
}