
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;
uint16_t h2_1 = 0xC3;

uint32_t fn2() {
  uint16_t r[5];
  uint16_t i = 0;
  while (i < 5) {
    r[i] = h2_0;
    i++;
  }
  return h2_1;
}

int main() { fn2(); }
