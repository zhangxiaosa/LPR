
#include <stdint.h>

uint32_t g;
uint32_t h = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3;
    if (h)
      return q_real;
    g = h;
  }
}

int main() { uint32_t q_real = fn2(); }
