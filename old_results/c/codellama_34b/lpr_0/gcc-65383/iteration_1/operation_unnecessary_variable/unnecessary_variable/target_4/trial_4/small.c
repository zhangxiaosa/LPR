
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;

uint32_t fn2() {
  for (;;) {
    g = h2_0;
  }
}

int main() { fn2(); }
