
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;
uint32_t fn2() {
  for (;;) {
    uint32_t r_real_0 = 0;
    uint32_t r_real_1 = 0x06D7;
    uint32_t r_real_2 = 0x06D7;
    if (h2_real)
      return 0xC3;
    g_real = r_real_0;
  }
}
int main() { fn2(); }
