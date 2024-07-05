#include <stdio.h>

unsigned fn2(signed p1, signed p2) {
  return p1;
}

int main() {
  unsigned f;
  unsigned u;
  int v;
  static unsigned w = 254U;
  signed ad_dim1[3][5][7] = {{{8}}, {{8}}, {{8}, {0x98}}};
  int af;

  signed fn9() {
    int ai[2];
    int j;
    for (j = 0; j < 2; j++)
      ai[j] = 8;
    for (w = 1;;) {
      for (; j < 4; j++) {
      }
      for (af = 6; af >= 0; af -= 1)
        v = ai[0] ^= ad_dim1[w + 1][w][af] = fn4(fn2(1, fn2(3, u--)), 4294967295);
      return af;
    }
  }

  fn9();
  f = ad_dim1[2][1][0];
  printf("checksum = %x\n", f);
  return 0;
}