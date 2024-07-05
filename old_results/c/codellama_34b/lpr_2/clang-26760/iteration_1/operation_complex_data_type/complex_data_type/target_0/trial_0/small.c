
#include <stdint.h>

int16_t m = 0x24F96B7BL;
uint32_t k = 0;
uint32_t f = 0;

int main() {
  for (f = 0; f <= 0xFFFFFFFF; f++) {
    m -= 8;
    if (m == 0) {
      break;
    }
  }
  k = k >> 1L;
}
