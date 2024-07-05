#include<stdio.h>

char fn2(p1) { return p1; }

int u;
short v0_3;

short fn11() {
  short d_ = 2;
  for (; u < 51; ++u) {
    v0_3 = d_;
    d_ = v0_3 + 0x9EE7F9D1C772505B;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v0_3);
  return 0;
}