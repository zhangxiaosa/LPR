#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, a p2) {
  return p1;
}

b fn3(b p1, b p2) {
  return p1;
}

c fn4(c p1, c p2) {
  return p1 % p2;
}

d fn5(d p1, d p2) {
  return p1;
}

f s;

void fn8(f p1, char *p2, int p3) {
  s = s ^ p1;
}

d u;
c v;
static d w = 254U;

a ad[7][5][7] = {{8},
                 {8},
                 {{8}, 0x98}};

b ae;
c af;

a fn9() {
  e ah = 3U;
  c ai[2];
  int i;

  // Initializations
  ai[0] = 8;
  ai[1] = 8;

  w = 1;
  for (;;) {
    // Empty loop
    i = 5;

    // Loop 7 times: af from 6 down to 0
    af = 6;
    v = ai[0] ^= ad[w + 1][w][6] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    af = 5;
    v = ai[0] ^= ad[w + 1][w][5] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    // ... unfold the loop 5 more times ...

    return ae;
  }
}

int main() {
  int i, j, k;
  int aj = 0;

  fn9();

  // Unrolled loop with i, j, and k
  i = 0;
  j = 0;
  k = 0;
  fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  k = 1;
  fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  // ... unfold the loop for k from 2 to 5 ...
  j = 1;
  k = 0;
  fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  // ... unfold the loop for k from 1 to 5 ...
  // ... unfold the loop for j from 2 to 4 ...
  i = 1;
  j = 0;
  k = 0;
  fn8(ad[i][j][k], "g_643[i][j][k]", aj);
  // ... unfold the loop for k and j ...
  // ... unfold the loop for i from 2 to 6 ...

  fn1(s, aj);
  return 0;
}