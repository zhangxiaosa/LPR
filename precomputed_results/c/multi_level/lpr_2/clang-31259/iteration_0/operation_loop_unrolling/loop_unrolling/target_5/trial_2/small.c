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
  s = s ^ ad[0][j][k];  // Iteration 1
  s = s ^ ad[1][j][k];  // Iteration 2
  s = s ^ ad[2][j][k];  // Iteration 3
  s = s ^ ad[3][j][k];  // Iteration 4
  s = s ^ ad[4][j][k];  // Iteration 5
  s = s ^ ad[5][j][k];  // Iteration 6
  s = s ^ ad[6][j][k];  // Iteration 7

  s = s ^ ad[0][j][k];  // Iteration 8
  s = s ^ ad[1][j][k];  // Iteration 9
  s = s ^ ad[2][j][k];  // Iteration 10
  s = s ^ ad[3][j][k];  // Iteration 11
  s = s ^ ad[4][j][k];  // Iteration 12
  s = s ^ ad[5][j][k];  // Iteration 13
  s = s ^ ad[6][j][k];  // Iteration 14

  s = s ^ ad[0][j][k];  // Iteration 15
  s = s ^ ad[1][j][k];  // Iteration 16
  s = s ^ ad[2][j][k];  // Iteration 17
  s = s ^ ad[3][j][k];  // Iteration 18
  s = s ^ ad[4][j][k];  // Iteration 19
  s = s ^ ad[5][j][k];  // Iteration 20
  s = s ^ ad[6][j][k];  // Iteration 21

  s = s ^ ad[0][j][k];  // Iteration 22
  s = s ^ ad[1][j][k];  // Iteration 23
  s = s ^ ad[2][j][k];  // Iteration 24
  s = s ^ ad[3][j][k];  // Iteration 25
  s = s ^ ad[4][j][k];  // Iteration 26
  s = s ^ ad[5][j][k];  // Iteration 27
  s = s ^ ad[6][j][k];  // Iteration 28

  s = s ^ ad[0][j][k];  // Iteration 29
  s = s ^ ad[1][j][k];  // Iteration 30
  s = s ^ ad[2][j][k];  // Iteration 31
  s = s ^ ad[3][j][k];  // Iteration 32
  s = s ^ ad[4][j][k];  // Iteration 33
  s = s ^ ad[5][j][k];  // Iteration 34
  s = s ^ ad[6][j][k];  // Iteration 35

  s = s ^ ad[0][j][k];  // Iteration 36
  s = s ^ ad[1][j][k];  // Iteration 37
  s = s ^ ad[2][j][k];  // Iteration 38
  s = s ^ ad[3][j][k];  // Iteration 39
  s = s ^ ad[4][j][k];  // Iteration 40
  s = s ^ ad[5][j][k];  // Iteration 41
  s = s ^ ad[6][j][k];  // Iteration 42

  s = s ^ ad[0][j][k];  // Iteration 43
  s = s ^ ad[1][j][k];  // Iteration 44
  s = s ^ ad[2][j][k];  // Iteration 45
  s = s ^ ad[3][j][k];  // Iteration 46
  s = s ^ ad[4][j][k];  // Iteration 47
  s = s ^ ad[5][j][k];  // Iteration 48
  s = s ^ ad[6][j][k];  // Iteration 49

  printf("checksum = %X\n", s);
  return 0;
}