#include <stdint.h>

int g;
int main() {
  int j = 0x24F96B7B;
  unsigned int k;
  if (j)
    --j;
q:
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}