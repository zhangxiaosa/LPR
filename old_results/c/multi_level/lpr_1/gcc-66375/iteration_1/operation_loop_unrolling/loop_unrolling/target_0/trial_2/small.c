#include <stdio.h>

char fn2(char p1, int p2_int) {
  return p1;
}

int u;
int v0[4];

short fn11() {
  short d_ = 2;

  // Loop unrolling
  v0[3] = 2;
  d_ = fn2(v0[3], 3) + 0x9EE7F9D1C772505B;

  v0[3] = d_;
  d_ = fn2(v0[3], 3) + 0x9EE7F9D1C772505B;

  v0[3] = d_;
  d_ = fn2(v0[3], 3) + 0x9EE7F9D1C772505B;

  v0[3] = d_;
  d_ = fn2(v0[3], 3) + 0x9EE7F9D1C772505B;

  for (u = 4; u < 51; ++u) {
    v0[3] = d_;
    d_ = fn2(v0[3], 3) + 0x9EE7F9D1C772505B;
  }

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v0[3]);
  return 0;
}