
#include <stdint.h>

uint32_t g;
uint32_t h0 = 0x92A1D2CD;
uint32_t h1 = 0x92A1D2CD;
uint32_t h2 = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3;
    uint32_t r_real[5][9][5];
    if (h2)
      return q_real;
    g = r_real[0x06D7][0x06D7][0x06D7];
  }
}

int main() {
  uint32_t q_real = fn2();

  // Decompose `h` into its primary data type
  uint32_t h0_real = h0;
  uint32_t h1_real = h1;
  uint32_t h2_real = h2;

  // Use the decompose variables in the program
  if (h2_real)
    return q_real;
  g = r_real[0x06D7][0x06D7][0x06D7];
}
