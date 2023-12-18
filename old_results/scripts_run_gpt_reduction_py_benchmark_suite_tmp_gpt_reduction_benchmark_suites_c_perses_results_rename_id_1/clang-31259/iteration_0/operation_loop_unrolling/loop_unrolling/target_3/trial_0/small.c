#include<stdio.h>

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

a fn9() {
  e ah = 3U;
  c ai[2];
  int i;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    // Unrolled iteration 1
    i = 0;
    // Original loop body code

    // Unrolled iteration 2
    i = 1;
    // Original loop body code

    // Unrolled iteration 3
    i = 2;
    // Original loop body code

    // Unrolled iteration 4
    i = 3;
    // Original loop body code

    // Unrolled iteration 5
    i = 4;
    // Original loop body code

    // Unrolled iteration 6
    i = 5;
    // Original loop body code

    // Unrolled iteration 7
    i = 6;
    // Original loop body code

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    return s;
  }
}

int main() {
  int i, j, k;
  fn9();
  for (i = 0; i < 7 - (7 % 7); i += 7) {
    // Unrolled iteration 1
    s = s ^ ad[i][0][0];
    s = s ^ ad[i][0][1];
    s = s ^ ad[i][0][2];
    s = s ^ ad[i][0][3];
    s = s ^ ad[i][0][4];
    s = s ^ ad[i][0][5];
    s = s ^ ad[i][0][6];

    // Unrolled iteration 2
    s = s ^ ad[i + 1][0][0];
    s = s ^ ad[i + 1][0][1];
    s = s ^ ad[i + 1][0][2];
    s = s ^ ad[i + 1][0][3];
    s = s ^ ad[i + 1][0][4];
    s = s ^ ad[i + 1][0][5];
    s = s ^ ad[i + 1][0][6];

    // Unrolled iteration 3
    s = s ^ ad[i + 2][0][0];
    s = s ^ ad[i + 2][0][1];
    s = s ^ ad[i + 2][0][2];
    s = s ^ ad[i + 2][0][3];
    s = s ^ ad[i + 2][0][4];
    s = s ^ ad[i + 2][0][5];
    s = s ^ ad[i + 2][0][6];

    // Unrolled iteration 4
    s = s ^ ad[i + 3][0][0];
    s = s ^ ad[i + 3][0][1];
    s = s ^ ad[i + 3][0][2];
    s = s ^ ad[i + 3][0][3];
    s = s ^ ad[i + 3][0][4];
    s = s ^ ad[i + 3][0][5];
    s = s ^ ad[i + 3][0][6];

    // Unrolled iteration 5
    s = s ^ ad[i + 4][0][0];
    s = s ^ ad[i + 4][0][1];
    s = s ^ ad[i + 4][0][2];
    s = s ^ ad[i + 4][0][3];
    s = s ^ ad[i + 4][0][4];
    s = s ^ ad[i + 4][0][5];
    s = s ^ ad[i + 4][0][6];

    // Unrolled iteration 6
    s = s ^ ad[i + 5][0][0];
    s = s ^ ad[i + 5][0][1];
    s = s ^ ad[i + 5][0][2];
    s = s ^ ad[i + 5][0][3];
    s = s ^ ad[i + 5][0][4];
    s = s ^ ad[i + 5][0][5];
    s = s ^ ad[i + 5][0][6];

    // Unrolled iteration 7
    s = s ^ ad[i + 6][0][0];
    s = s ^ ad[i + 6][0][1];
    s = s ^ ad[i + 6][0][2];
    s = s ^ ad[i + 6][0][3];
    s = s ^ ad[i + 6][0][4];
    s = s ^ ad[i + 6][0][5];
    s = s ^ ad[i + 6][0][6];
  }
  printf("checksum = %X\n", s);
  return 0;
}