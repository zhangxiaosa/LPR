#include <stdint.h>

signed g;
int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  int32_t m = j;
q:
  k = k >> 1L;
  if (g) {
    k = k << m;
    goto q;
  }
}
