
#include <stdint.h>

int16_t fn1() {
  int32_t m = 0x24F96B7BL;
  uint32_t k;
  for (uint32_t f; f;) {
    m -= 8;
  }
  int32_t l = 1L;
q:;
  k = k >> 1;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {}
