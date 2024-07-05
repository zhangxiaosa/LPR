
#include <stdint.h>

int16_t fn1() {
  int8_t i;
  int32_t j = 0x24F96B7BL;
  uint32_t k;
  uint16_t k_msb;
  uint16_t k_lsb;
  for (f = 0; f;) {
    j -= 8;
    i = j;
  }
  int32_t l = 1L;
  int32_t m = j;
q:;
  k_msb = k >> 16;
  k_lsb = k & 0xFFFF;
  k_msb = k_msb >> l;
  if (i) {
    k_msb = k_msb << m;
    k_lsb = k_lsb << m;
    goto q;
  }
}

int main() {}
