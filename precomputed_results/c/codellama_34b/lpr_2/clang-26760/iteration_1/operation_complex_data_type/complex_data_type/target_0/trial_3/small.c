
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  uint32_t k;
  uint8_t* k_ptr = (uint8_t*)&k;
  uint8_t k_low = *k_ptr;
  uint8_t k_high = *(k_ptr + 1);

  for (uint32_t f; f;)
    m -= 8;

  if (m) {
    k_low = k_low << m;
    k_high = k_high >> (32 - m);
  }

  return k;
}

int main() {}
