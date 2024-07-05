c
#include <stdint.h>

int16_t fn1() {
  uint32_t k;
  for (uint32_t f; f;)
    k -= 8;
  q:;
  k = k >> 1L;
  if (k) {
    k = 0;
    goto q;
  }
}

int main() {}
