#include <iostream>

unsigned g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  while (1) {
    k = k >> 1;
    i = g;
    if (i) {
      k = k << j;
      continue;
    }
    break;
  }

  // Unrolled loop
  while (j >= 4) {
    j -= 4;
    // Loop body iteration 1
    // Loop body iteration 2
    // Loop body iteration 3
    // Loop body iteration 4
  }

  // Remaining iterations (less than 4)
  while (j > 0) {
    --j;
    // Loop body
  }
}