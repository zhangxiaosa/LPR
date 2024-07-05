
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;
uint16_t h2_1 = 0xC3;

uint32_t fn2() {
  for (;;) {
    uint32_t r0 = r[0x06D7];
    if (h2_0)
      return h2_1;
    g = r0;
  }
}

int main() { fn2(); }
