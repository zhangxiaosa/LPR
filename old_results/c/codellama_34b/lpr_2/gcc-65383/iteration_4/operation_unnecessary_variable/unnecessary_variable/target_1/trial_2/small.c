
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t r_real[45];
    g_real = r_real[0x06D7];
  }
}

int main() { fn2(); }
