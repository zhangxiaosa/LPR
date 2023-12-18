#include <stdint.h>

uint8_t g;

int main() {
  uint32_t j = 0x24F96B7BUL;
  uint32_t k;

  if (j)
    --j;

q:
  k = k >> 1;

  if (g) {
    k = k << j;
    goto q;
  }

  return 0;
}