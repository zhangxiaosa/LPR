#include <stdio.h>

int u;
short v0_3;

int main() {
  int d_ = 2;

  // Unrolled loop with a factor of 4
  // First iteration
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;

  // Second iteration
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;

  // Third iteration
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;

  // Fourth iteration
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;

  printf("checksum = %X\n", v0_3);
  return 0;
}