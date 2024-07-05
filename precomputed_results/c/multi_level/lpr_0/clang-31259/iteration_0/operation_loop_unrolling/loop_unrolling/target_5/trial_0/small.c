#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned f;

a fn2(a p1, a p2) { return p1; }
c fn4(c p1, c p2) { return p1 % p2; }
d fn5(d p1, d p2) { return p1; }

f s;
d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
c af;

int main() {
  c ai[2];
  int aj;
  
  for (aj = 0; aj < 2; aj++)
    ai[aj] = 8;
  
  for (w = 1U;;) {
    for (; aj < 5; aj++)
      ;
    
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn5(255U, u--)), 4294967295U);
    
    break;
  }
  
  int i, j;
  s = 0;

  // Unrolled loop
  for (j = 0; j < 5; j++) {
    // Expansion for i = 0
    s ^= ad[0][j][0];
    s ^= ad[1][j][0];
    s ^= ad[0][j][1];
    s ^= ad[1][j][1];
    s ^= ad[0][j][2];
    s ^= ad[1][j][2];
    s ^= ad[0][j][3];
    s ^= ad[1][j][3];
    s ^= ad[0][j][4];
    s ^= ad[1][j][4];
    s ^= ad[0][j][5];
    s ^= ad[1][j][5];
    s ^= ad[0][j][6];
    s ^= ad[1][j][6];

    // Expansion for i = 2
    s ^= ad[2][j][0];
    s ^= ad[3][j][0];
    s ^= ad[2][j][1];
    s ^= ad[3][j][1];
    s ^= ad[2][j][2];
    s ^= ad[3][j][2];
    s ^= ad[2][j][3];
    s ^= ad[3][j][3];
    s ^= ad[2][j][4];
    s ^= ad[3][j][4];
    s ^= ad[2][j][5];
    s ^= ad[3][j][5];
    s ^= ad[2][j][6];
    s ^= ad[3][j][6];

    // Expansion for i = 4
    s ^= ad[4][j][0];
    s ^= ad[5][j][0];
    s ^= ad[4][j][1];
    s ^= ad[5][j][1];
    s ^= ad[4][j][2];
    s ^= ad[5][j][2];
    s ^= ad[4][j][3];
    s ^= ad[5][j][3];
    s ^= ad[4][j][4];
    s ^= ad[5][j][4];
    s ^= ad[4][j][5];
    s ^= ad[5][j][5];
    s ^= ad[4][j][6];
    s ^= ad[5][j][6];
  }
  
  printf("checksum = %X\n", s);
  
  return 0;
}