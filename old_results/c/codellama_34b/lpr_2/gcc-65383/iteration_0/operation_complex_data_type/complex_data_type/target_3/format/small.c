
#include <stdint.h>

typedef uint32_t b;

b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static uint64_t i = 0x06D7L;

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3L;
    uint32_t q_imag = 0;
    uint32_t r_real[5][9][5];
    uint32_t r_imag[5][9][5];
    if (h[2])
      return q_real;
    g = r_real[i][i][i];
  }
}

int main() {
  uint32_t q_real = fn2();
  uint32_t q_imag = 0;
  printf("Real part: %u\n", q_real);
  printf("Imaginary part: %u\n", q_imag);
  return 0;
}
