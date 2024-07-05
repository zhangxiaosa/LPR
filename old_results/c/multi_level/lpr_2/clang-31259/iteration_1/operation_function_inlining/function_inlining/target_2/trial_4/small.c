#include <stdio.h>

signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

void main() {
  signed ai[2];
  unsigned i;
  signed s;
  unsigned u = 4294967295U;
  signed w = 1;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (; i < 25; i++) {
    for (af = 6; af >= 0; af -= 1)
      ai[0] ^= ad[w + 1][w][af] = 1 % --u;
  }
  for (i = 0; i < 5; i++)
    s ^= ad[2][i][0];
}