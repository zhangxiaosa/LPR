
#include <stdint.h>

int16_t m = 0x24F96B7BL;
uint32_t k;
uint32_t f;
uint32_t shift;

int16_t fn1() {
  f = 0;
  for (; f;)
    m -= 8;
  shift = m;
  if (m) {
    k = k << shift;
    goto q;
  }
}

int main() {}

