
#include <stdint.h>

uint32_t g_1 = 0;
uint32_t g_2 = 0;
uint32_t g_3 = 0;
uint32_t g_4 = 0;
uint32_t g_5 = 0;

uint32_t h2_1 = 0x92;
uint32_t h2_2 = 0xA1;
uint32_t h2_3 = 0xD2;
uint32_t h2_4 = 0xCD;

uint32_t fn2() {
  for (;;) {
    uint32_t r[5];
    if (h2_1 || h2_2 || h2_3 || h2_4)
      return 0xC3;
    g_1 = r[0x06D7];
  }
}

int main() { fn2(); }
