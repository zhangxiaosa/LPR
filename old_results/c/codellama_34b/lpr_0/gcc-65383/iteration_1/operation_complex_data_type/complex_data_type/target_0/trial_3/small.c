
#include <stdint.h>

uint32_t g;
uint32_t h2_value = 0x92A1D2CD;
uint32_t r0, r1, r2, r3, r4;

uint32_t fn2() {
  for (;;) {
    r0 = 0;
    r1 = 0;
    r2 = 0;
    r3 = 0;
    r4 = 0;
    if (h2_value)
      return 0xC3;
    g = r0;
  }
}

int main() { fn2(); }
