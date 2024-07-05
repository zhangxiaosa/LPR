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
a fn9() {
  e ah = 3U;
  c ai[2];
  int i;

  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (w = 1;;) {
    for (i = 0; i < 5; i += 3) {
      // Loop body (1st iteration)
    }

    for (; i < 5; i++) {
      // Loop body (2nd iteration)
    }

    for (; i < 5; i++) {
      // Loop body (3rd iteration)
    }

    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] =
          fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    }

    return ae;
  }
}

int main() {
  int i, j, k;
  fn9();

  // Checksum calculation
  unsigned int checksum = 0;
  for (i = 0; i < 7; i += 3) {
    for (j = 0; j < 5; j++) {
    	// Loop unrolling (1st iteration)
      checksum ^= ad[i][j][0] ^ ad[i+1][j][0] ^ ad[i+2][j][0];
      checksum ^= ad[i][j][1] ^ ad[i+1][j][1] ^ ad[i+2][j][1];
      checksum ^= ad[i][j][2] ^ ad[i+1][j][2] ^ ad[i+2][j][2];
      checksum ^= ad[i][j][3] ^ ad[i+1][j][3] ^ ad[i+2][j][3];
      checksum ^= ad[i][j][4] ^ ad[i+1][j][4] ^ ad[i+2][j][4];
      checksum ^= ad[i][j][5] ^ ad[i+1][j][5] ^ ad[i+2][j][5];
      checksum ^= ad[i][j][6] ^ ad[i+1][j][6] ^ ad[i+2][j][6];
    }
  }
  s = checksum;
  printf("checksum = %X\n", s);
  return 0;
}