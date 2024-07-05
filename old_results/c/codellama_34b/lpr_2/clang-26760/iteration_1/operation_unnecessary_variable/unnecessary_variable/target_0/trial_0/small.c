
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  for (uint32_t f; f;)
    m -= 8;
  return m;
}

int main() {}
