#include <stdint.h>

int32_t main() {
  int32_t j = 0x24F96B7B;
  int32_t l = 1;
  int32_t m = j;

  uint32_t k = 0;
  int32_t i = 0;

q:
  k = k >> l;
  i = m;

  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}