
#include <stdint.h>

int16_t fn1() {
  int8_t m_high = (0x24F96B7BL >> 8) & 0xFF;
  int8_t m_low = 0x24F96B7BL & 0xFF;
  uint32_t k;
  for (uint32_t f; f;)
    m_high -= 8;
q:;
  uint8_t k_low = k & 0xFF;
  if (m_high) {
    k_low = k_low << m_low;
    goto q;
  }
}

int main() {}
