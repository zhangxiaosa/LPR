
#include <stdint.h>

uint32_t f;
int16_t fn1() {
  int8_t i;
  int32_t j_high = 0x24F96B7B;
  int32_t j_low = 0x12345678;
  uint32_t k;
  for (f = 0; f;) {
    j_high -= 8;
    j_low -= 8;
    i = j_low;
  }
  int32_t l = 1L;
  int32_t m = j_high;
q:;
  k = k >> l;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
