
#include <stdint.h>

uint32_t g_real;

uint32_t fn2() {
  for (;;) {
    if (h2_real)
      return 0xC3;
    g_real = r_real[0x06D7];
  }
}

int main() { fn2(); }
