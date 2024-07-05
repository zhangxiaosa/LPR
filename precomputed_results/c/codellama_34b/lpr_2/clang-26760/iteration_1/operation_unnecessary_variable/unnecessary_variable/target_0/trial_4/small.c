
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  uint32_t k = 1UL;
  for (uint32_t f; f;)
    m -= 8;
  if (m) {
    k = k << m;
  }
  return k;
}

int main() {
  fn1();
}
