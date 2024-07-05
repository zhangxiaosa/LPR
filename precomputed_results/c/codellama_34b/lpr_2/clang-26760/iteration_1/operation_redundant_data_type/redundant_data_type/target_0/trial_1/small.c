
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F9;
  uint16_t k;
  for (uint16_t f; f;)
    m -= 8;
q:;
  k = k >> 1;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {}
