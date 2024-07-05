
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// typedef signed a;
// typedef int c;
// typedef unsigned d;
// typedef unsigned e;
// d f;
// a g;
// int main() {
//   a i;
//   c j = 0x24F96B7BL;
//   e k;
//   for (f = 0; f;)
//     for (; j; --j)
//       ;
//   a n = g;
// q:;
//   k = k >> 1L;
//   i = n;
//   if (i) {
//     k = k << j;
//     goto q;
//   }
// }

// Optimized program:

#define MAX_J 0x24F96B7BL

int main() {
  int i, n;
  unsigned int j, k;

  // Unroll the inner loop
  for (j = MAX_J; j > 0; j -= 4) {
    // Do nothing
  }

  // Use a temporary variable to store the result of the shift operation
  k = MAX_J >> 1L;
  n = g;

  // Use a while loop instead of goto
  while (n) {
    k = k << j;
    n--;
  }

  return 0;
}
