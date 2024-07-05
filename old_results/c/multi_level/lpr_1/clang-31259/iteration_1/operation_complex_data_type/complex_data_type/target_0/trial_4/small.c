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
signed ad_0_0_0 = 8;
signed ad_1_0_0 = 8;
signed ad_2_0_0 = 8;
signed ad_2_0_1 = 0x98;

int ae;
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
      v = ai[0] ^= ad_2_0_1 = fn4(fn2(1, fn2(3, u--)), 4294967295);
    return ae;
  }
}

int main() {
  fn9();
  f = ad_2_0_1;
  printf("checksum = %x\n", f);
  return 0;
}