#include <stdint.h>

signed g;

int main() {
  signed i;
  int32_t j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  signed l = 1L;
  signed m = j;
q:
  k = k >> l;
  i = g;
  if (i) {
    k = k << m;
    goto q;
  }
}
