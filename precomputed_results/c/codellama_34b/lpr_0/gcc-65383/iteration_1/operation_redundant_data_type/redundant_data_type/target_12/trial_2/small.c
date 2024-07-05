
#include <stdint.h>

uint32_t g;
uint32_t h2 = 0x92A1D2CD;
uint32_t fn2() {
  for (;;) {
    if (h2)
      return 0xC3;
    g = 0x06D7;
  }
}

int main() { fn2(); }
