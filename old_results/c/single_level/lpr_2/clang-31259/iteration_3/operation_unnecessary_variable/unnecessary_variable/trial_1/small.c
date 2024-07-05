#include <stdio.h>

typedef unsigned e;
typedef unsigned f;

signed fn2(signed p1, signed p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

int af;
unsigned u;
int v;
static unsigned w = 254U;

signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};

f s;

signed fn9() {
  e ah = 3U;
  int ai[2];
  ai[0] = ai[1] = 8;
  w = 1;

  for (; w <= 1; w++) {
    int af;
    v = ai[0] ^= ad[w + 1][w][af] =
        fn4(fn3(1, fn5(255U, fn2(ah, --u))), 4294967295U);
  }

  return v;
}

int main() {
  int j, k;
  fn9();

  for (int i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 6; k += 2) {
        s = ad[i][j][k];
        printf("checksum = %X\n", s);
      }
    }
  }

  return 0;
}
