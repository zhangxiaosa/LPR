#include <stdio.h>

unsigned int g;

int main() {
  unsigned int j = 0x24F96B7B;
  unsigned int k;
  if (j)
    --j;
q:
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}