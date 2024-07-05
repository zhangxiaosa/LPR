#include <stdint.h>

int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;
  if (j)
    j = j - 1;
  int32_t l = 1;
q:
  k = k >> l;
  if (g) {
    k = k << j;
    goto q;
  }
}