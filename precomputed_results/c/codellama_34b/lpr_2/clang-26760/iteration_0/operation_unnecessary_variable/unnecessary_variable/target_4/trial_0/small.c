
#include <stdint.h>

int16_t fn1() {
  uint32_t k;
  for (uint32_t f; f;) {
    // Do nothing
  }
q:;
  k = k >> 1L;
  if (0) {
    k = k << 0;
    goto q;
  }
}

int main() {}
