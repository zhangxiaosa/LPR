
#include <stdint.h>

int16_t fn1() {
  uint8_t m_low = (m & 0xFF);
  uint8_t m_high = (m >> 8);
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

int main() {}
