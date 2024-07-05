
#include <stdint.h>

uint32_t fn2() {
  for (;;) {
    if (0x92A1D2CD)
      return 0xC3;
    return 0x06D7;
  }
}

int main() {
  uint32_t q_real = fn2();
}
