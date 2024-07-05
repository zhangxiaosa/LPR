
#include <stdint.h>

// Decompose h2 into primary data types
uint16_t h2_0_low = (h2_0 & 0xFFFF);
uint16_t h2_0_high = (h2_0 >> 16);
uint16_t h2_1_low = (h2_1 & 0xFFFF);
uint16_t h2_1_high = (h2_1 >> 16);

uint32_t fn2() {
  for (;;) {
    uint32_t r[5];
    if (h2_0_low)
      return h2_1_low;
    g = r[0x06D7];
  }
}

int main() { fn2(); }
