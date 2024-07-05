#include <stdio.h>

typedef signed signed;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) { return p1; }
b fn3(b p1, b p2) { return p1; }
c fn4(c p1, c p2) { return p1 % p2; }
d fn5(d p1, d p2) { return p1; }
f s;
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
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    return ae;
  }
}

int main() {
  int i;
  fn9();
  for (i = 0; i < 7; i++)
    s = s ^ ad[i][1][0];
  printf("checksum = %X\n", s);
  return 0;
}