#include <iostream>

signed g;

int main() {
  unsigned f = 0u;
  signed j = 0x24F96B7B;
  unsigned k = g;

  while (j > 0) {
    // Unrolled loop body
    --j;
    --j;
    --j;
    --j;
  }

  while (k > 0) {
    k = k >> 1;
    if (g != 0) {
      k = k << j;
    }
  }

  return 0;
}