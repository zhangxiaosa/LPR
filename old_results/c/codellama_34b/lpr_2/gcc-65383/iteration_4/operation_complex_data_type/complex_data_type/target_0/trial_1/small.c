
#include <stdint.h>

// Decomposed variables
uint32_t h2_real_high = 0x92A1;
uint32_t h2_real_low = 0xD2CD;
uint32_t g_real_high = 0x06D7;
uint32_t g_real_low = 0x0000;

// Function to optimize
uint32_t fn2() {
  for (;;) {
    uint32_t r_real[45];
    if (h2_real_high || h2_real_low)
      return 0xC3;
    g_real_high = r_real[g_real_low];
  }
}

int main() { fn2(); }
