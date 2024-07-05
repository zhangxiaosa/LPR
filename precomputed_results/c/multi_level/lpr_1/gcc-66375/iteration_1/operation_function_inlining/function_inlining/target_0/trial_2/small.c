#include <stdio.h>

char fn2(char p1, int p2_int) { return p1; }

int u;
int v0[4];

int fn10(int p1, int p2) {
  short d_ = 2;
  for (; u < 51; ++u) {
    v0[3] = p2_short;  // Replaces fn3(4, d_)
    d_ = v0[3] + 0x9EE7F9D1C772505B;  // Inlines fn2(v0[3], 3)
  }
  return 3;
}

int main() {
  fn10(6, 255);  // Replaces fn11()
  printf("checksum = %X\n", v0[3]);
  return 0;
}