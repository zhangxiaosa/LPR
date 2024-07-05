#include<stdio.h>

int fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254;

signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};

int af;

int main() {
  unsigned i;
  int ai[2];

  for (i = 0; i < 2; i++)
    ai[i] = 8;

  for (w = 1;;) {
    for (; i < 25; i++) {
    }

    unsigned temp_result = 1;
    for (af = 6; af >= 0; af -= 1) {
      u -= 1;
      temp_result = 1;
      v = ai[0] ^= ad[w + 1][w][af] = fn4(temp_result, 4294967295U);
    }
    return 0;
  }

  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];

  printf("checksum = %X\n", s);
  return 0;
}