
#include <stdint.h>

int main() {
  uint32_t i;
  uint32_t j = 0x24F96B7BL;
  uint32_t k;
  for (i = 0; i < j; i++) {
    k = k >> 1L;
    if (i)
      k = k << j;
  }
}
