
#include <stdint.h>

uint32_t g;
uint16_t h2_0 = 0x92A1;

uint32_t fn2() {
  for (;;) {
    uint32_t r[5];
    if (h2_0)
      return 0x92A1;
    g = r[0x06D7];
    g = r[0x06D8];
    g = r[0x06D9];
    g = r[0x06DA];
    g = r[0x06DB];
  }
}

int main() { fn2(); }
