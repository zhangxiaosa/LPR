
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;
uint32_t fn2() {
  for (;;) {
    if (h2_real)
      return 0xC3;
    g_real = 0x06D7;
  }
}

int main() {
  uint32_t q_real_real = fn2();
}
