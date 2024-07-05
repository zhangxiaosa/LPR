
#include <stdint.h>

int16_t fn1() {
  int16_t m = 0x24F96B7BL;
  int16_t k = 0;
  int16_t f = 0;

  for (int16_t f; f;) {
    m -= 8;
    k = k >> 1L;
    if (m) {
      k = k << m;
    }
  }

  return k;
}

int main() {
  int16_t result = fn1();
  return result;
}
