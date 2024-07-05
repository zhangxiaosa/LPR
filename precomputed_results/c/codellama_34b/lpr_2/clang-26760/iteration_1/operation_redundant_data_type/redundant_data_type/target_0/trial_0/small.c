
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  uint16_t k;
  for (uint16_t f; f;)
    m -= 8;
q:;
  k = k >> 1L;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {}
