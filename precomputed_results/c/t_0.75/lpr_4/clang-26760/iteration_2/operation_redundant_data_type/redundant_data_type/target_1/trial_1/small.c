#include <stdint.h>

int32_t g;

int main() {
  uint32_t j = 0x24F96B7B;
  uint32_t k;
  if (j != 0)
    j--;
q:
  k = k >> 1;
  if (g != 0) {
    k = k << j;
    goto q;
  }
}