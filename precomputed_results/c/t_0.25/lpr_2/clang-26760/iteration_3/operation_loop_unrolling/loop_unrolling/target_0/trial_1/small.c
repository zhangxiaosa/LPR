#include <iostream>

signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;

  // Unrolled loop
  for (; j >= 4; j -= 4) {
    // Unrolled iteration 1
    // Unrolled iteration 2
    // Unrolled iteration 3
    // Unrolled iteration 4
  }

  // Handle remaining iterations
  if (j == 3) {
    // Single iteration for j = 3
  } else if (j == 2) {
    // Single iteration for j = 2
  } else if (j == 1) {
    // Single iteration for j = 1
  }

  unsigned p = g;
  q:
    k = k >> 1;
    if (p) {
      k = k << j;
      goto q;
    }
}
