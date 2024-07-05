
#include <stdint.h>

int16_t fn1() {
  uint32_t m = 0x24F96B7BL;
  uint32_t n = 0;

  for (uint32_t f; f;) {
    n = m - 8;
    m = n;
  }

  m = m >> 1L;
  if (m) {
    n = m << n;
  }
}

int main() {}
