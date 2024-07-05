
#include <stdint.h>

uint32_t fn1() {
  int32_t m = 0x24F96B7BL;
  uint32_t k;
  while (m > 0) {
    m -= 8;
    k = k >> 1L;
    if (m) {
      k = k << m;
      m = 0;
    }
  }
}

int main() {}
