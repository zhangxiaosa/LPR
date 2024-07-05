
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t r_real0 = r_real[0];
    uint32_t r_real1 = r_real[1];
    uint32_t r_real2 = r_real[2];
    ...
    uint32_t r_real44 = r_real[44];
    if (h2_real)
      return 0xC3;
    g_real = r_real[0x06D7];
  }
}

int main() { fn2(); }
