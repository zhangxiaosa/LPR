#include <stdint.h>

uint32_t g;
uint32_t k1;
uint32_t k2;

int main() {
  uint32_t j = 0x24F96B7BL;
  uint32_t k1_init;
  uint32_t k2_init;

  k1_init = k1 = 0;
  k2_init = k2 = 0;

  if (j)
    --j;

q:
  k1_init = k1 = k1_init >> 1L;

  if (g) {
    k2_init = k2 = k2_init << j;
    goto q;
  }

  uint32_t k = k1_init | k2_init;
}
