
#include <stdint.h>

uint32_t g;
uint32_t h2_0 = 0x92A1D2CD;
uint32_t h2_1 = 0xC3;
uint32_t r0 = 0x06D7;

uint32_t fn2() {
  for (;;) {
    if (h2_0)
      return h2_1;
    g = r0;
  }
}

int main() { fn2(); }
