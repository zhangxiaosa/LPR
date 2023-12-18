#include <stdio.h>

signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p1; }

signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
unsigned s;

void fn9() {
  int ai[2];
  int i, j, af;

  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }

  for (i = 0; i < 5; i++) {
    for (af = 6; af >= 0; af--) {
      ai[0] ^= ad[i + 1][i][af] = fn4(fn5(1, fn5(255U, fn2(3U, i))), 4294967295U);
    }
  }
}

int main() {
  int i, j;

  fn9();

  // Optimized unrolled loop for i = 0-6:
  s = (s ^ ad[0][0][0]) ^ (s ^ ad[1][0][0]) ^ (s ^ ad[2][0][0]) ^
      (s ^ ad[3][0][0]) ^ (s ^ ad[4][0][0]) ^ (s ^ ad[5][0][0]) ^ (s ^ ad[6][0][0]);

  printf("checksum = %X\n", s);
  return 0;
}