
#include <stdint.h>

int8_t i;
int32_t j = 0x24F96B7BL;
uint32_t k;
int32_t l = 1L;
int32_t m = j;

int16_t fn1() {
  for (uint32_t f = 0; f;) {
    j -= 8;
    i = j;
  }
  k = k >> l;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
