#include <stdint.h>

signed g;
int main() {
  unsigned k;
  if (0x24F96B7BL)
    --0x24F96B7BL;
  int32_t l = 1L;
  int32_t m = 0x24F96B7BL;
q:
  k = k >> l;
  if (g) {
    k = k << m;
    goto q;
  }
}