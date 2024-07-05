#include <stdint.h>

signed g;

int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;

  if (j)
    --j;

  k = k >> 1L;

  while (g) {
    k = k << j;
    k = k >> 1L;

    // Repeat the loop body until g becomes zero
  }
}