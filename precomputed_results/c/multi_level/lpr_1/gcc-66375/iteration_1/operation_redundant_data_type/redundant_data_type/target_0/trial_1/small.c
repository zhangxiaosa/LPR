#include<stdio.h>

int fn2(int p1, int p2_int) { return p1; }

int u;
int v0[4];

int fn11() {
  int d_ = 2;
  for (; u < 51; ++u) {
    v0[3] = d_;
    d_ = v0[3] + 0x9EE7F9D1C772505B;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %d\n", v0[3]);
  return 0;
}