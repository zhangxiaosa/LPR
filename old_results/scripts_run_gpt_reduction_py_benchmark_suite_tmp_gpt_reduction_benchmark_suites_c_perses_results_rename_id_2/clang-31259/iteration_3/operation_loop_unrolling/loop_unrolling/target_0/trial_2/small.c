#include <stdio.h>

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254;

int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int main() {
  int ai[2];
  ai[0] = 8;
  ai[1] = 8;

  unsigned j = 0; // Loop counter

  // Loop unrolling
  if (j < 2) {
    ai[j] = 8;
    j += 20;
  }
  if (j < 2) {
    ai[j] = 8;
    j += 20;
  }
  // End of loop unrolling
  
  w = 1;
  
  for (af = 6; af >= 0; af -= 1)
    v = ai[0] ^= ad[w + 1][w][af] = fn4(u--, 4294967295U);

  s = ad[2][1][0];
  printf("checksum = %X\n", s);

  return 0;
}