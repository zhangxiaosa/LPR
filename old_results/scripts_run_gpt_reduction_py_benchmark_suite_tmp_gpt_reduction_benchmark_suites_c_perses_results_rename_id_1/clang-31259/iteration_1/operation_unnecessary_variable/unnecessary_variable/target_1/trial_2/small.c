#include <stdio.h>

unsigned fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

signed optimized_fn9() {
  int j;
  for (w = 1;;) {
    for (; j < 4; j++) {
    }
    for (; af >= 0; af -= 1)
      v = 8 ^= ad_dim1[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
    return 0;
  }
}

int main() {
  optimized_fn9();
  f = ad_dim1[2][1][0];
  printf("checksum = %x\n", f);
  return 0;
}