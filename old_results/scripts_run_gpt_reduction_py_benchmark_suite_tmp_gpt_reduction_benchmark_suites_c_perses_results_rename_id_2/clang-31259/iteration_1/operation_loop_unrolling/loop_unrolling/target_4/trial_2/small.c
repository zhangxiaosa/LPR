#include <stdio.h>

signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }

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

  w = 1;

  // Unrolled loop
  // Unrolled iteration 1 (w = 1)
  // Unrolled iteration 2 (w = 2)
  // Unrolled iteration 3 (w = 3)
  // Unrolled iteration 4 (w = 4)
  // Unrolled iteration 5 (w = 5)

  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, u--), 4294967295U);

  return;
}

int main() {
  unsigned i;

  fn9();

  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];

  printf("checksum = %X\n", s);

  return 0;
}