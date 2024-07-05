
#include <stdint.h>

uint32_t g;
uint32_t h2_0 = 0x92A1D2CD;
uint32_t h2_1 = 0xC3;

uint32_t fn2() {
  for (;;) {
    uint32_t r0 = 0;
    uint32_t r1 = 0;
    uint32_t r2 = 0;
    uint32_t r3 = 0;
    uint32_t r4 = 0;
    if (h2_0)
      return h2_1;
    g = r0 + r1 + r2 + r3 + r4;
  }
}

int main() { fn2(); }
