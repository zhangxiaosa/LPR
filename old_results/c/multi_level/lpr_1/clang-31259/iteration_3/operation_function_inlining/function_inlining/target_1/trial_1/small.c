#include <stdio.h>

unsigned u;
int v;
static unsigned w = 254U;

signed fn2(signed p1, signed p2) {
  return p1;
}

signed optimized_fn9() {
  int ai[2];
  int j;

  for (j = 0; j < 2; j++)
    ai[j] = 8;

  for (w = 1;;) {
    for (; j < 4; j++) {
      // No statements in the inner loop.
    }

    for (int af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad_dim1[w + 1][w][af] = fn2(3, u--) % 1;
    }

    return 0;
  }
}

int main() {
  optimized_fn9();
  return 0;
}
