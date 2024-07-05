
#include <stdint.h>

uint32_t g;
uint32_t h2 = 0x92A1D2CD;

uint32_t fn2() {
  uint32_t q_real = 0xC3;
  return q_real;
}

int main() {
  uint32_t q_real = fn2();
}
