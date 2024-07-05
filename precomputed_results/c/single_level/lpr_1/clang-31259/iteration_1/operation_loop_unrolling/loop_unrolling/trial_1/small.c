#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

signed fn2(signed p1, signed p2) { return p1; }

b fn3(b p1, b p2) { return p1; }

c fn4(c p1, c p2) { return p1 % p2; }

d fn5(d p1, d p2) { return p1; }

f s;

void fn6(p1) { s = s ^ p1; }

d u;
c v;

static d w = 254U;

signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

b ae;
c af;

signed fn9() {
  e ah = 3U;
  c ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  
  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 6;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 5;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 4;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 3;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 2;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 1;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  w = 1;
  for (; i < 5; i++) {
    // Loop body
  }
  af = 0;
  v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

  return ae;
}

int main() {
  int i, j, k;
  int aj = 0;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++) {
        fn6(ad[i][j][k]);
      }
  fn1(s, aj);
  return 0;
}
