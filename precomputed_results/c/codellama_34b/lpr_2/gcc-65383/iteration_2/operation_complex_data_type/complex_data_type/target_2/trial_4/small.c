c
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;
uint32_t q_real_real = 0xC3;
uint32_t r_real_real[5][9][5];

uint32_t fn2() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 5; k++) {
        r_real_real[i][j][k] = g_real;
      }
    }
  }
  return q_real_real;
}

int main() {
  uint32_t q_real_real = fn2();
  return 0;
}
