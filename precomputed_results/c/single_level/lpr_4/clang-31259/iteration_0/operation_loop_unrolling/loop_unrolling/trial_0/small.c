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

d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
b ae;

c af;

a fn9() {
  e ah = 3U;
  c ai[2];
  int i;

  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (w = 1;;) {

    for (; i < 5; i++) {
      // Unrolled loop iterations
      v = ai[0] ^= ad[w + 1][w][6] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
      v = ai[0] ^= ad[w + 1][w][5] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
      v = ai[0] ^= ad[w + 1][w][4] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
      v = ai[0] ^= ad[w + 1][w][3] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
      v = ai[0] ^= ad[w + 1][w][2] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
      v = ai[0] ^= ad[w + 1][w][1] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    }

    return ae;
  }
}

int main() {
  int aj = 0;

  fn9();

  // Triple nested loops unrolled
  fn7(ad[0][0][0]);
  fn7(ad[0][0][1]);
  fn7(ad[0][0][2]);
  fn7(ad[0][0][3]);
  fn7(ad[0][0][4]);
  fn7(ad[0][0][5]);
  fn7(ad[0][0][6]);
  fn7(ad[0][1][0]);
  fn7(ad[0][1][1]);
  fn7(ad[0][1][2]);
  fn7(ad[0][1][3]);
  fn7(ad[0][1][4]);
  fn7(ad[0][1][5]);
  fn7(ad[0][1][6]);
  // ...remaining loop iterations omitted for brevity

  fn1(s, aj);
  return 0;
}