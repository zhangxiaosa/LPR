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
    for (; i < 5; i++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn2(ah, u--)), 4294967295U);

    return ae;
  }
}

int main() {
  int i, j, k;

  fn9();

  // Loop unrolling optimization
  for (i = 0; i < 6; i += 2) {
    // Unrolled iteration 1
    {
      // Loop body with j = 0
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][0][k];
      }

      // Loop body with j = 1
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][1][k];
      }
    }

    // Unrolled iteration 2
    {
      // Loop body with j = 2
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][2][k];
      }

      // Loop body with j = 3
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][3][k];
      }
    }
  }

  // Handle the remaining iteration (if 7 is odd)
  if (i < 7) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 7; k++) {
        s = s ^ ad[i][j][k];
      }
    }
  }

  printf("checksum = %X\n", s);

  return 0;
}
