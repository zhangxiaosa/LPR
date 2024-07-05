
#include <stdint.h>

uint32_t fn2() {
  uint32_t q_real_real = 0xC3;
  return q_real_real;
}

int main() {
  uint32_t q_real_real = fn2();
}
