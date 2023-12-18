#include <stdio.h>

signed fn2(signed p1, signed p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
void fn9() {
  int ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    // Unrolled loop with a factor of 5
    for (; i < 25; i += 5) {
      // Unrolled loop body
      // Iteration 1
      v = ai[0] ^= ad[w + 1][w][6] = fn4(fn2(1, u--), 4294967295U);
      // Iteration 2
      v = ai[0] ^= ad[w + 1][w][5] = fn4(fn2(1, u--), 4294967295U);
      // Iteration 3
      v = ai[0] ^= ad[w + 1][w][4] = fn4(fn2(1, u--), 4294967295U);
      // Iteration 4
      v = ai[0] ^= ad[w + 1][w][3] = fn4(fn2(1, u--), 4294967295U);
      // Iteration 5
      v = ai[0] ^= ad[w + 1][w][2] = fn4(fn2(1, u--), 4294967295U);
    }
    // Remaining iterations
    for (; i < 25; i++) {
      // Original loop body (Iteration 1)
      v = ai[0] ^= ad[w + 1][w][6] = fn4(fn2(1, u--), 4294967295U);
    }
    return;
  }
}

int main() {
  unsigned i;
  fn9();
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];
  printf("checksum = %X\n", s);
  return 0;
}