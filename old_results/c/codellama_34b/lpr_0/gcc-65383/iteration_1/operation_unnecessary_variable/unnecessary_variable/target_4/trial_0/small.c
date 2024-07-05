
#include <stdint.h>
uint32_t g;
uint16_t h2_0 = 0x92A1;

uint32_t fn2() {
  for (;;) {
    if (h2_0)
      return 0x92A1;
    g = 0x06D7;
  }
}

int main() { fn2(); }
