
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  uint32_t k;
  for (uint32_t f; f;)
    m -= 8;
q:;
  uint16_t k_low = k & 0x0000FFFF;
  uint16_t k_high = (k >> 16) & 0x0000FFFF;
  if (m) {
    k_low = k_low << m;
    k_high = k_high >> (32 - m);
    goto q;
  }
}

int main() {}
