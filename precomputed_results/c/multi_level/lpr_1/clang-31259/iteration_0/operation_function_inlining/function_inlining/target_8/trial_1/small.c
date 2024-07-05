#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

a fn2(a p1, a p2) { return p1; }

b fn3(b p1, b p2) { return p1; }

c fn4(c p1, c p2) { return p1 % p2; }

d fn5(d p1, d p2) { return p1; }

f s;

d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
b ae;
c af;

int main() {
  int i, j, k;

  e ah = 3U;
  int ai[2];
  int temp_i;

  for (temp_i = 0; temp_i < 2; temp_i++)
    ai[temp_i] = 8;

  for (w = 1;;) {
    for (temp_i = 0; temp_i < 5; temp_i++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[254U + 1][254U][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

    ae;

    // Rest of the main function code...
  }

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][j][k];
      }

  // Inlined function fn8
  s = s ^ 8U;

  printf("checksum = %X\n", s);

  return 0;
}
