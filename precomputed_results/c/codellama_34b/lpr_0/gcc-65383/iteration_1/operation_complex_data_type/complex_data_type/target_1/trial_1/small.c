
#include <stdint.h>

uint8_t g_0 = 0x00;
uint8_t g_1 = 0x00;
uint8_t g_2 = 0x00;
uint8_t g_3 = 0x00;

uint32_t h2 = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t r[5];
    if (h2)
      return 0xC3;
    g_0 = r[0x06D7];
    g_1 = r[0x06D7] >> 8;
    g_2 = r[0x06D7] >> 16;
    g_3 = r[0x06D7] >> 24;
  }
}

int main() { fn2(); }
