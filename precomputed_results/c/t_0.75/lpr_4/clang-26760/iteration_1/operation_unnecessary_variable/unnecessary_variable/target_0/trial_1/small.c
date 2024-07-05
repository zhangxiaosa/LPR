#include <stdint.h>

signed g;
int main() {
  signed i = g;
  int32_t j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  int32_t l = 1L;
  int32_t m = j;
q:
  k = k >> l;
  i = g;
  if (i) {
    k = k << m;
    goto q;
  }
}
