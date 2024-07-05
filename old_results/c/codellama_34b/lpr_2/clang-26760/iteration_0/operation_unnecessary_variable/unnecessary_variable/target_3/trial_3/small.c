
#include <stdint.h>

int16_t fn1() {
  int32_t m = 0x24F96B7BL;
  m = m >> 1L;
  if (m) {
    m = m << m;
  }
}

int main() {}
