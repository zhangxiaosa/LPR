
#include <stdint.h>

int16_t fn1() {
  int32_t m = 0x24F96B7BL;
  uint32_t k;

  // Unroll the loop 8 times
  for (uint32_t f = 0; f < 8; f++) {
    m -= 8;
  }

  k = k >> 1L;
  if (m) {
    k = k << m;
  }
}

int main() {
  return 0;
}
