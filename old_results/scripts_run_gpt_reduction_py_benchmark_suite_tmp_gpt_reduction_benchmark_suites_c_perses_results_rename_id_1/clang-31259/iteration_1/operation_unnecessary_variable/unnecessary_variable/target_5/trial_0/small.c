#include <stdio.h>

unsigned fn2(signed p1) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned u;
int v;
static unsigned w = 254U; 
signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

signed optimized_fn9() {
  int ai[2];
  int j;

  for (j = 0; j < 2; j++)
    ai[j] = 8;

  for (w = 1;;) {
    for (; j < 4; j++) {
      // No operations inside the loop
    }

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad_dim1[w + 1][w][af] = fn4(fn2(1), 4294967295);

    return 0;
  }
}

int main() {
  optimized_fn9();

  // Replace f with ad_dim1[2][1][0]
  printf("checksum = %x\n", ad_dim1[2][1][0]);

  return 0;
}