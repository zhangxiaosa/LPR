#include <stdint.h>

signed g;

int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  int32_t l = 1L;
  int32_t m = j;
q:
  k = k >> l;
  i = 0; // Replaced i with constant value 0
  if (0) { // Replaced i with constant value 0
    k = k << m;
    goto q;
  }
}