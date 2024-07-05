#include <stdint.h>

int main() {
  int j = 0x24F96B7B;
  uint32_t k = 0;

  while (j) {
    k >>= 1;
    if (g)
      k <<= j;
    j--;
  }

  return 0;
}