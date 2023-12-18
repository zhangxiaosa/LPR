#include <stdio.h>

int fn4(int p1, int p2) {
  return p1 % p2;
}

int u;
int v;
static int w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  int iterations = (25 - 1) / 20;

  for (int j = 0; j < 2; j++)
    ai[j] = 8;

  w = 1;

  for (;;) {
    ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);
    ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);
    ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);
    ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);
    ai[0] ^= ad[w + 1][w][af] = fn4(--u, 4294967295);

    if (--iterations <= 0)
      break;
  }

  printf("checksum = %X\n", ad[2][1][0]);
  return 0;
}