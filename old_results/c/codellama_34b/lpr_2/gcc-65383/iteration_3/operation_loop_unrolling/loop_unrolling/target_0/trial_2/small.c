
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;

uint32_t fn2() {
  uint32_t q_real_real = 0xC3;
  uint32_t r_real[5][9];

  if (h2_real)
    return q_real_real;

  g_real = r_real[0x06D7][0x06D7];

  uint32_t i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      if (r_real[i][j] == 0xC3) {
        g_real = r_real[i][j];
        break;
      }
    }
  }

  return q_real_real;
}

int main() {
  uint32_t q_real_real = fn2();
}
