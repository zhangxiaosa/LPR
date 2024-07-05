
#include <stdint.h>

uint32_t g;
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
  // The variable `q_real` is not used anywhere in the function,
  // so we can optimize it out by removing its assignment and declaration.
  for (;;) {
    uint32_t r_real[5][9][5];
    if (h2)
      return;
    g = r_real[0x06D7][0x06D7][0x06D7];
  }
}
