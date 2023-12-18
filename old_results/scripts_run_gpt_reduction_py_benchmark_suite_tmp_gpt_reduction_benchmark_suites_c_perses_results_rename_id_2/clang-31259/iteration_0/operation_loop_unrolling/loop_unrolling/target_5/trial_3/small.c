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
      // Unrolled loop body repeated 5 times
      // Unrolled loop body repeated 5 times
      // Unrolled loop body repeated 5 times
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

  // Unrolled loop body repeated 7 times
  s = s ^ ad[0][j][0];
  s = s ^ ad[1][j][0];
  s = s ^ ad[2][j][0];
  s = s ^ ad[3][j][0];
  s = s ^ ad[4][j][0];
  s = s ^ ad[5][j][0];
  s = s ^ ad[6][j][0];
  
  s = s ^ ad[0][j][1];
  s = s ^ ad[1][j][1];
  s = s ^ ad[2][j][1];
  s = s ^ ad[3][j][1];
  s = s ^ ad[4][j][1];
  s = s ^ ad[5][j][1];
  s = s ^ ad[6][j][1];
  
  s = s ^ ad[0][j][2];
  s = s ^ ad[1][j][2];
  s = s ^ ad[2][j][2];
  s = s ^ ad[3][j][2];
  s = s ^ ad[4][j][2];
  s = s ^ ad[5][j][2];
  s = s ^ ad[6][j][2];
  
  s = s ^ ad[0][j][3];
  s = s ^ ad[1][j][3];
  s = s ^ ad[2][j][3];
  s = s ^ ad[3][j][3];
  s = s ^ ad[4][j][3];
  s = s ^ ad[5][j][3];
  s = s ^ ad[6][j][3];
  
  s = s ^ ad[0][j][4];
  s = s ^ ad[1][j][4];
  s = s ^ ad[2][j][4];
  s = s ^ ad[3][j][4];
  s = s ^ ad[4][j][4];
  s = s ^ ad[5][j][4];
  s = s ^ ad[6][j][4];
  
  s = s ^ ad[0][j][5];
  s = s ^ ad[1][j][5];
  s = s ^ ad[2][j][5];
  s = s ^ ad[3][j][5];
  s = s ^ ad[4][j][5];
  s = s ^ ad[5][j][5];
  s = s ^ ad[6][j][5];
  
  s = s ^ ad[0][j][6];
  s = s ^ ad[1][j][6];
  s = s ^ ad[2][j][6];
  s = s ^ ad[3][j][6];
  s = s ^ ad[4][j][6];
  s = s ^ ad[5][j][6];
  s = s ^ ad[6][j][6];

  printf("checksum = %X\n", s);
  return 0;
}