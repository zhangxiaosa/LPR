
#include <stdint.h>

int16_t fn1() {
  int32_t m = 0x24F96B7BL;
  uint32_t k;
  for (uint32_t f; f;)
    m -= 8;
  while (m) {
    k = k >> 1L;
    k = k << m;
  }
}

int main() {}
