#include <stdio.h>
#include <stdint.h>

int32_t u;
int16_t v0_3;

int main() {
  int32_t d_ = 2;
  for (; u < 51L; ++u) {
    v0_3 = (int16_t)d_;
    d_ = (int32_t)((int8_t)v0_3) + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", v0_3);
  return 0;
}
