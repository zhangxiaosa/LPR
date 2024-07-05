#include <stdint.h>

int32_t f;
int32_t g;

int main() {
  int32_t j = 0x24F96B7B;
  uint32_t k = 0;
  int32_t o;

  while (j > 0) {
    --j;
  }

  o = g;
  uint32_t p = o;

q:
  k >>= 1;

  if (p) {
    k <<= j;
    goto q;
  }
}
