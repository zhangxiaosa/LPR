
#include <stdint.h>

uint32_t g;
uint32_t h0 = 0x92A1D2CD;
uint32_t h1 = 0x92A1D2CD;
uint32_t h2 = 0x92A1D2CD;

void init_r_real(uint32_t r_real[5*9*5]) {
  for (int i = 0; i < 5*9*5; i++) {
    r_real[i] = 0;
  }
}

void read_r_real(uint32_t r_real[5*9*5], uint32_t q_real) {
  for (int i = 0; i < 5*9*5; i++) {
    q_real += r_real[i];
  }
}

uint32_t fn2() {
  uint32_t q_real = 0xC3;
  uint32_t r_real[5*9*5];
  init_r_real(r_real);
  read_r_real(r_real, q_real);
  if (h2)
    return q_real;
  g = r_real[0x06D7];
}

int main() {
  uint32_t q_real = fn2();
}
