
#include <stdint.h>

typedef uint32_t b;
b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3L;
    if (h[2])
      return q_real;
    g = 0;
  }
}

int main() {
  uint32_t q_real = fn2();
}
