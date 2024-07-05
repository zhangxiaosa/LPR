
#include <stdint.h>

typedef uint32_t b;

b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3L;
    uint32_t r_real[5][9][5];
    if (h[2])
      return q_real;
    g = r_real[0x06D7L][0x06D7L][0x06D7L];
  }
}

int main() {
  uint32_t q_real = fn2();
  if (q_real == 0xC3L) {
    // The loop body will not be executed, so we can return early
    return q_real;
  }
  // The loop body will be executed, so we need to continue
  g = r_real[0x06D7L][0x06D7L][0x06D7L];
  return q_real;
}
