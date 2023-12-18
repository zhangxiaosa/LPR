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
  // Unrolled loop body repeated 7 times
  // Unrolled loop body repeated 7 times
  // Unrolled loop body repeated 7 times
  // Unrolled loop body repeated 7 times
  // Unrolled loop body repeated 7 times
  // Unrolled loop body repeated 7 times
  s = s ^ ad[0][0][j];
  s = s ^ ad[0][1][j];
  s = s ^ ad[0][2][j];
  s = s ^ ad[0][3][j];
  s = s ^ ad[0][4][j];
  
  s = s ^ ad[1][0][j];
  s = s ^ ad[1][1][j];
  s = s ^ ad[1][2][j];
  s = s ^ ad[1][3][j];
  s = s ^ ad[1][4][j];
  
  s = s ^ ad[2][0][j];
  s = s ^ ad[2][1][j];
  s = s ^ ad[2][2][j];
  s = s ^ ad[2][3][j];
  s = s ^ ad[2][4][j];
  
  s = s ^ ad[3][0][j];
  s = s ^ ad[3][1][j];
  s = s ^ ad[3][2][j];
  s = s ^ ad[3][3][j];
  s = s ^ ad[3][4][j];
  
  s = s ^ ad[4][0][j];
  s = s ^ ad[4][1][j];
  s = s ^ ad[4][2][j];
  s = s ^ ad[4][3][j];
  s = s ^ ad[4][4][j];
  
  s = s ^ ad[5][0][j];
  s = s ^ ad[5][1][j];
  s = s ^ ad[5][2][j];
  s = s ^ ad[5][3][j];
  s = s ^ ad[5][4][j];
  
  s = s ^ ad[6][0][j];
  s = s ^ ad[6][1][j];
  s = s ^ ad[6][2][j];
  s = s ^ ad[6][3][j];
  s = s ^ ad[6][4][j];

  printf("checksum = %X\n", s);
  return 0;
}