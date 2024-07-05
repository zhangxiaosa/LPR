
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;
uint16_t h2_1 = 0xC3;

uint32_t r0 = 0x06D7;
uint32_t r[5] = {0};

uint32_t fn2() {
  g = r[r0];
  if (g == h2_1)
    return h2_1;
  return g;
}

int main() { fn2(); }
