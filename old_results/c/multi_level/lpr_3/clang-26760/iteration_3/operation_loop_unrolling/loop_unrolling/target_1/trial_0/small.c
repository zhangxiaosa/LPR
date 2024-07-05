#include <stdint.h>

int32_t f;
int32_t g;

int main() {
  int32_t i;
  int32_t j = 0x24F96B7B;
  uint32_t k;

  while (i != 0) {
    j--;
    k = k >> 1;

    if (i != 0) {
      k = k << j;
    }
  }

  return 0;
}
