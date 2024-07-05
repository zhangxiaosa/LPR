#include <stdio.h>

int fn4(int p1, int p2) { return p1 % p2; }
int fn5(int p1, int p2) { return p1; }

int s;
int u;
int v;
static int w = 254;

int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

int fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;

  w = 1;

  // Unrolled loop for 4 iterations
  af = 6;
  v = ai[0] ^= ad[2][1][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
  af -= 1;
  v = ai[0] ^= ad[2][1][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
  af -= 1;
  v = ai[0] ^= ad[2][1][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
  af -= 1;
  v = ai[0] ^= ad[2][1][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
  // End of unrolled loop

  return 0;
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %d\n", s);
  return 0;
}
