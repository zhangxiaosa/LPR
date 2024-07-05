#include <stdio.h>

int main() {
  int u;
  short v0_3;
  int d_ = 2;

  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;

  printf("checksum = %X\n", v0_3);
  return 0;
}