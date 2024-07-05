#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

a fn2(a p1, a p2) { return p1; }

c fn4(c p1, c p2) { return p1 % p2; }

f s;
d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
c af;

void fn9() {
  e ah = 3U;
  c ai[2];
  int i;
  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (w = 1;;) {
    for (i = 0; i < 25; i++) {
      // Unrolled loop body repeated 5 times
    }

    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(ah, u--)), 4294967295U);
    }

    return;
  }
}

int main() {
  int i, j, k;
  fn9();

  // Unrolled loop body
  s = s ^ ad[0][0][0];
  s = s ^ ad[0][0][1];
  s = s ^ ad[0][0][2];
  s = s ^ ad[0][0][3];
  s = s ^ ad[0][0][4];
  s = s ^ ad[0][0][5];
  s = s ^ ad[0][0][6];

  s = s ^ ad[0][1][0];
  s = s ^ ad[0][1][1];
  s = s ^ ad[0][1][2];
  s = s ^ ad[0][1][3];
  s = s ^ ad[0][1][4];
  s = s ^ ad[0][1][5];
  s = s ^ ad[0][1][6];

  s = s ^ ad[0][2][0];
  s = s ^ ad[0][2][1];
  s = s ^ ad[0][2][2];
  s = s ^ ad[0][2][3];
  s = s ^ ad[0][2][4];
  s = s ^ ad[0][2][5];
  s = s ^ ad[0][2][6];

  s = s ^ ad[0][3][0];
  s = s ^ ad[0][3][1];
  s = s ^ ad[0][3][2];
  s = s ^ ad[0][3][3];
  s = s ^ ad[0][3][4];
  s = s ^ ad[0][3][5];
  s = s ^ ad[0][3][6];

  s = s ^ ad[0][4][0];
  s = s ^ ad[0][4][1];
  s = s ^ ad[0][4][2];
  s = s ^ ad[0][4][3];
  s = s ^ ad[0][4][4];
  s = s ^ ad[0][4][5];
  s = s ^ ad[0][4][6];

  // Repeat for i=1 to i=6

  printf("checksum = %X\n", s);
  return 0;
}