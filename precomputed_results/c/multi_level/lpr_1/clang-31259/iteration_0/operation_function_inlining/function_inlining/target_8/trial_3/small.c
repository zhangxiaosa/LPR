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

code

int main() {
  int i, j, k;
  int aj = 0;

e ah = 3U;
c ai[2];

for (i = 0; i < 2; i++)
ai[i] = 8;

w = 1;
for (; i < 5; i++)
;

for (af = 6; af >= 0; af -= 1)
v = ai[0] ^= ad[w + 1][w][af] = (1 % 255) ^ 4294967295U;

s = s ^ 8U;

printf("checksum = %X\n", s);

return 0;
}