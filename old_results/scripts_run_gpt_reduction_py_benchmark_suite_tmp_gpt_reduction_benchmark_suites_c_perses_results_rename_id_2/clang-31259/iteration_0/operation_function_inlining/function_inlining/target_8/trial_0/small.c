#include <stdio.h>

typedef signed a;
typedef short b;
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
b ae;
c af;

int main() {
  e ah = 3U;
  c ai[2];
  int i, j, k;
  int aj = 0;

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 5; i++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(ah, u--)), 4294967295U);

    ae = 6;

    // Inlined fn9 code
    e ah = 3U;
    c ai[2];

    for (i = 0; i < 2; i++)
      ai[i] = 8;

    for (w = 1;;) {
      for (; i < 5; i++)
        ;

      for (af = 6; af >= 0; af -= 1)
        v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn2(ah, u--)), 4294967295U);

      ae = 6;
    }

    // End of inlined code

    return;
  }

  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++)
        s = s ^ ad[i][j][k];

  printf("checksum = %X\n", s);
  return 0;
}