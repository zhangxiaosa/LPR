#include <iostream>

unsigned g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  // Unrolled loop (2 iterations)
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    continue;
  }
  break;

  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    continue;
  }
  break;

  return 0;
}