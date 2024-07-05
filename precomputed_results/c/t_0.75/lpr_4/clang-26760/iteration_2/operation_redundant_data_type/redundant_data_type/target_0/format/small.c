#include <stdint.h>
signed g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}