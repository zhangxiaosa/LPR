
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;
uint16_t h2_1 = 0xC3;

uint32_t fn2() {
  uint32_t r_0;
  for (;;) {
    if (h2_0)
      return h2_1;
    r_0 = 0x06D7;
    g = r_0;
  }
}

int main() { fn2(); }
