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

  // Loop unrolled 1
  v = ai[0] ^= ad[2][1][6] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][5] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][4] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][3] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][2] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][1] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][1][0] = fn4(fn2(1, u--), 4294967295U);

  // Loop unrolled 2
  v = ai[0] ^= ad[2][2][6] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][5] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][4] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][3] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][2] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][1] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][2][0] = fn4(fn2(1, u--), 4294967295U);

  // Loop unrolled 3
  v = ai[0] ^= ad[2][3][6] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][5] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][4] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][3] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][2] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][1] = fn4(fn2(1, u--), 4294967295U);
  v = ai[0] ^= ad[2][3][0] = fn4(fn2(1, u--), 4294967295U);

  // ... continue unrolling with additional iterations as needed

  // Remaining iterations (less than 5)
  for (; af >= 0; af -= 1) {
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, u--), 4294967295U);
  }

  return;
}

int main() {
  unsigned i;

  fn9();

  unsigned s;
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];

  printf("checksum = %X\n", s);

  return 0;
}