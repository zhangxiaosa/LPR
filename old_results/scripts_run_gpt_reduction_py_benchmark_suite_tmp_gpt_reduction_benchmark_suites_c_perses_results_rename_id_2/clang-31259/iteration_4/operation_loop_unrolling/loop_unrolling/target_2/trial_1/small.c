#include <stdio.h>

int fn4(int p1, int p2) { return p1 % p2; }

int u;
int v;
static int w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int j;

  j = 0;
  ai[0] = 8;
  j++;

  ai[1] = 8;
  j++;

  while (j < 4) {
    af = 6;
    v = ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);

    j++;
  }

  printf("checksum = %X\n", ad[2][1][0]);
  return 0;
}