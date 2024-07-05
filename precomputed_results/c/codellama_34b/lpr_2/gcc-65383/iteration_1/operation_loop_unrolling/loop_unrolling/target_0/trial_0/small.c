
#include <stdint.h>
typedef uint32_t b;
b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};

uint32_t fn2() {
  uint32_t q_real = 0xC3L;
  uint32_t r_real[5][9][5];

  // Unroll the loop
  for (int i = 0; i < 3; i++) {
    if (h[i])
      return q_real;
    g = r_real[0x06D7L][0x06D7L][0x06D7L];
  }

  return q_real;
}

int main() {
  uint32_t q_real = fn2();
}
