
#include <stdint.h>

int32_t fn1() {
  int32_t j = 0x24F96B7BL;
  int32_t k = 0;
  for (int32_t f = 0; f;) {
    j -= 8;
    k = j;
  }
  int32_t l = 1L;
  int32_t m = j;
q:;
  k = k >> l;
  if (k) {
    k = k << m;
    goto q;
  }
}

int main() {}
