
#include <stdint.h>

uint32_t g;
uint32_t h0 = 0x92A1D2CD;
uint32_t h1 = 0x92A1D2CD;
uint32_t h2 = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3;
    uint32_t r_real_0 = 0x06D7;
    uint32_t r_real_1 = 0x06D7;
    uint32_t r_real_2 = 0x06D7;
    if (h2)
      return q_real;
    g = r_real_0 + r_real_1 + r_real_2;
  }
}

int main() {
  uint32_t q_real = fn2();
}
