
#include <stdint.h>

uint32_t fn2() {
  for (;;) {
    uint32_t q_real = 0xC3L;
    return q_real;
  }
}

int main() {
  uint32_t q_real = fn2();
}
