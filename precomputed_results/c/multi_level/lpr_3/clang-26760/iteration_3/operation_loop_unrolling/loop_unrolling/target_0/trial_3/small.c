#include <stdint.h>

int32_t f;
int32_t g;

int main() {
  int32_t j = 0x24F96B7B;
  uint32_t k;
  uint32_t p = g;

q:
  k = k >> 1;
  if (p) {
    k = k << j;
    goto q;
  }
}
