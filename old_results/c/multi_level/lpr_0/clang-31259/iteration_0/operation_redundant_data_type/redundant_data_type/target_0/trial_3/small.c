#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned f;

signed fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int aj = 0;
  for (; aj < 2; aj++)
    ai[aj] = 8;

  for (; w = 1;;) {
    for (; aj < 5; aj++)
      ;

    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, fn5(255U, u--)), 4294967295U);

    break;
  }

  int i = 0, j = 0, k = 0;
  for (i = 0; i < 6; i += 2)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 5; k += 2)
        s ^= ad[i][j][k];

  printf("checksum = %x\n", s);

  return 0;
}