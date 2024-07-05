#include<stdio.h>

int fn4(int p1, int p2) { return p1 % p2; }

int fn2(int p1, int p2) { return p1; }

unsigned u;
int v, af;

static unsigned w = 254U;

signed ad_dim1[3][5][7] = { { {8, 0, 0, 0, 0, 0, 0}
                              {8, 0, 0, 0, 0, 0, 0},
                              {8, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0} },

                            { {8, 0, 0, 0, 0, 0, 0},
                              {8, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0} },

                            { {8, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0} } } };

int af;

signed optimized_fn9() {
  int ai[2];
  int j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  for (w = 1;;) {
    for (; j < 4; j++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_dim1[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    return 0;
  }
}

int main() {
  optimized_fn9();
  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}