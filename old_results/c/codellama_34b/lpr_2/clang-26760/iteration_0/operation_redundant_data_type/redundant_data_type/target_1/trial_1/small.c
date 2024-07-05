
#include <stdint.h>

b fn1() {
  int8_t i;
  int32_t j = 0x24F96B7BL;
  uint32_t k;
  for (int32_t f = 0; f;) {
    j -= 8;
    i = j;
  }
  int32_t l = 1L;
  int32_t m = j;
q:;
  k = k >> l;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
