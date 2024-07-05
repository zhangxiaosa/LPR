#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned f;

a fn2(a p1, a p2) {
  return p1;
}

c fn4(c p1, c p2) {
  return p1 % p2;
}

d fn5(d p1, d p2) {
  return p1;
}

f s;
d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
c af;

int main() {
  c ai[2];
  int aj;

  ai[0] = 8;
  ai[1] = 8;

  for (w = 1U;;) {
    for (; aj < 5; aj++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn5(255U, u--)), 4294967295U);
    break;
  }

  int i, j, k;
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s ^= ad[i][j][k];

  printf("checksum = %X\n", s);
  return 0;
}
