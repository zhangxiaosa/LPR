
#include <stdint.h>

int16_t fn1(int32_t m, uint32_t k) {
  for (uint32_t f; f;)
    m -= 8;
  k >>= 1L;
  if (m) {
    k <<= m;
    goto q;
  }
}

int main() {
  int32_t m = 0x24F96B7BL;
  uint32_t k = 0;
  fn1(m, k);
}
