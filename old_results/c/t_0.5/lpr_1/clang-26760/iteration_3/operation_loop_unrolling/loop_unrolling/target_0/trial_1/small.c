#include <iostream>

unsigned g;

int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;

  // Loop unrolling
  // Iteration 1
  k = k >> 1L;
  if (g)
    k = k << j;

  // Iteration 2
  k = k >> 1L;
  if (g)
    k = k << j;

  // Iteration 3
  k = k >> 1L;
  if (g)
    k = k << j;

  // ... Repeat as needed

  // Final iteration
  k = k >> 1L;
  if (g)
    k = k << j;

  return 0;
}