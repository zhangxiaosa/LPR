
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  uint32_t k;
  for (uint32_t f; f;)
    m -= 8;
q:;
  k = k >> 1L;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {
  int16_t sign = m >> 15;
  uint16_t abs_m = m & 0x7FFF;
  int16_t reconstructed_m = sign | (abs_m << 16);
  return 0;
}
