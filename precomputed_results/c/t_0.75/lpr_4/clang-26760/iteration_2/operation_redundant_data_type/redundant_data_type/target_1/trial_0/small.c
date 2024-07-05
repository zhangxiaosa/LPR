#include <stdint.h>

int32_t g;
int main() {
  uint32_t j = 0x24F96B7B;
  uint32_t k;
  if (j)
    --j;
q:
  k = k >> 1;
  if (g) {
    k = k << (uint32_t)j;
    goto q;
  }
}