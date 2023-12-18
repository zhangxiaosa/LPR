#include <iostream>

unsigned int g;

int main() {
  unsigned int j = 0x24F96B7BL;
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