#include <iostream>

unsigned f;
signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;
  
  // Loop unrolling
  int iterations = 4;
  int unrolledIterations = j / iterations;
  int remainingIterations = j % iterations;
  
  // Unrolled loop
  for (int i = 0; i < unrolledIterations; ++i) {
    --j;
    --j;
    --j;
    --j;
  }
  
  // Remaining iterations
  for (int i = 0; i < remainingIterations; ++i) {
    --j;
  }
  
  unsigned p = g;
  
q:
  k = k >> 1;
  if (p) {
    k = k << j;
    goto q;
  }
}