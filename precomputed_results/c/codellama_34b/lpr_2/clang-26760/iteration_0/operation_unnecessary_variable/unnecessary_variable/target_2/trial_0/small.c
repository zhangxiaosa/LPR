
#include <stdint.h>

int16_t fn1() {
  int32_t m = 0x24F96B7BL;
  for (uint32_t f; f;) {
    m -= 8;
  }
  int32_t l = 1L;
  int32_t n = m;
q:;
  if (n) {
    goto q;
  }
}

int main() {}
