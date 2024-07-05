#include <stdio.h>

unsigned fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }

unsigned f;
unsigned u;
int v;
static unsigned w = 254U;
signed ad_dim1[3][5][7] = {{{8}}, {{8}}, {{8}, {0x98}}};
int ae;
int af;

signed fn9() {
  int ai_0;
  int ai_1;
  int j;
  for (j = 0; j < 2; j++) {
    if (j == 0)
      ai_0 = 8;
    else
      ai_1 = 8;
  }
  for (w = 1;;) {
    for (; j < 4; j++) {
    }
    for (af = 6; af >= 0; af -= 1)
      v = (ai_0 ^= ad_dim1[w + 1][w][af] =
               fn4(fn2(1, fn2(3, u--)), 4294967295));
    return ae;
  }
}

int main() {
  fn9();
  int ai_0 = ad_dim1[2][1][0];
  int ai_1 = ad_dim1[2][1][1];
  printf("checksum = %x\n", ai_0);
  return 0;
}