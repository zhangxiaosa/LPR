#include <iostream>

unsigned int g;

int main() {
  unsigned int j = 0x24F96B7BL;
  unsigned int k = 0;

  if (j)
    --j;

q:
  k >>= 1;

  if (g) {
    k <<= j;
    goto q;
  }

  return 0;
}