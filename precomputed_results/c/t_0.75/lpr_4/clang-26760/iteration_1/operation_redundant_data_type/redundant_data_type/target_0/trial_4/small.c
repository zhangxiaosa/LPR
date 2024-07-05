#include <stdint.h>

signed g;

int main() {
  signed i;
  int32_t j = 0x24F96B7BL;
  unsigned int k;
  if (j != 0)
    --j;
  signed l = 1L;
  signed m = j;
q:
  k = k >> 1;
  i = (signed)g;
  if (i != 0) {
    k = k << m;
    goto q;
  }
}