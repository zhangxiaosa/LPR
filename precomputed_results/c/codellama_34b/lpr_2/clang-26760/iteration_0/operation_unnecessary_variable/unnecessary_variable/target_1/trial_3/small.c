
#include <stdint.h>

int16_t fn1() {
  int32_t k;
  for (uint32_t f; f;) {
    k = k >> 1L;
  }
q:;
  k = k << 0x24F96B7BL;
  goto q;
}

int main() {}
