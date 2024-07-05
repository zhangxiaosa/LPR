
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;
uint32_t fn2() {
  for (;;) {
    uint32_t r_real_1 = 0;
    uint32_t r_real_2 = 0;
    if (h2_real)
      return 0xC3;
    g_real = r_real_1 + (r_real_2 << 16);
  }
}
int main() { fn2(); }
