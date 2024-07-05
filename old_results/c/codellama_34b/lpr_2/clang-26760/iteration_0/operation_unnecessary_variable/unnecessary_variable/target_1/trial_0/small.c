
#include <stdint.h>

int16_t fn1() {
  uint32_t k = 0x24F96B7BL >> 8;
  uint32_t l = 1L;
  int32_t m = 0x24F96B7BL;
q:;
  k = k >> l;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {}
