
#include <stdint.h>

int16_t f_lo;
int16_t f_hi;
int16_t fn1() {
  int8_t i;
  int32_t j = 0x24F96B7BL;
  uint32_t k;
  for (f_lo = 0; f_lo;) {
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
