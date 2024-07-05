
#include <stdint.h>

uint32_t g;
uint32_t h0 = 0x92A1D2CD;
uint32_t h1 = 0x92A1D2CD;
uint32_t h2 = 0x92A1D2CD;

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3;
    uint32_t r_real[5][9][5];
    uint32_t r_flat[225];
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 9; j++) {
        for (int k = 0; k < 5; k++) {
          r_flat[i * 9 * 5 + j * 5 + k] = r_real[i][j][k];
        }
      }
    }
    if (h2)
      return q_real;
    g = r_flat[0x06D7];
  }
}

int main() {
  uint32_t q_real = fn2();
}
