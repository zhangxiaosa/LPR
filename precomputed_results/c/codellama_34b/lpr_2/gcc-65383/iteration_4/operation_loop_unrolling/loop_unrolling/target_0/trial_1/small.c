
#include <stdint.h>

uint32_t g_real;
uint32_t h2_real = 0x92A1D2CD;

uint32_t fn2() {
  g_real = r_real[0x06D7];
  return 0xC3;
}

int main() {
  fn2();
}
