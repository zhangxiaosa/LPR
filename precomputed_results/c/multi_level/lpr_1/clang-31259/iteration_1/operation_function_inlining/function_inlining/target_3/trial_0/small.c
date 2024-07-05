#include <stdio.h>

unsigned fn2(signed p1, signed p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int ae;
int af;

int main() {
  int i;
  int ai[2];
  for (w = 1;;) {
    for (; w < 2; w++) {
      ai[0] = 8;
      ad[w + 1][w][0] = 8;
    }
    for (af = 6; af >= 0; af -= 1) {
      ad[w + 1][w][af] ^= 1 % 4294967295;
      v = ad[w + 1][w][af];
    }
    return ae;
  }
  for (i = 0; i < 7; i++)
    f = f ^ ad[i][1][0];
  printf("checksum = %x\n", f);
  return 0;
}