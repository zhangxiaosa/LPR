#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef unsigned f;

c fn4(c p1, c p2) { return p1 % p2; }
d fn5(d p1, d p2) { return p1; }
f s;
d u;
c v;
static d w = 254U;
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
  int i, j, k;
  for (i = 0; i < 6; i += 2)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 5; k += 2)
        s ^= ad[i][j][k];
  printf("checksum = %X\n", s);
  return 0;
}