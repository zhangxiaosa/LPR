
#include <stdint.h>

int16_t fn1() {
  int8_t i = 0; // The value of i is always 0, so we can optimize it out
  int32_t j = 0x24F96B7BL;
  uint32_t k;
  for (uint32_t f; f;) {
    j -= 8;
    // i = j; // This assignment is not needed, as i is always 0
  }
  int32_t l = 1L;
  int32_t m = j;
q:;
  k = k >> l;
  // if (i) { // This condition is always false, as i is always 0
  //   k = k << m;
  //   goto q;
  // }
}

int main() {}
