#include <stdio.h>

short fn3(short p1, short p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

int main() {
  short p1 = 1;
  unsigned p2 = 255U;
  int af;
  unsigned u;
  int v;
  static unsigned w = 254U;
  signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

  int i, j, k;

  int ai[2];
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  w = 1;

  for (i = 0; i < 5; i++) {
    for (af = 6; af >= 0; af--) {
      u--;
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(p1, fn5(p2, u)), 4294967295U);
    }
  }

  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 6; k += 2) {
        printf("checksum = %X\n", ad[i][j][k]);
      }
    }
  }

  return 0;
}
