#include <stdio.h>

int main() {
  int i;
  short r = 0;

  // Loop unrolling
  // Unrolled loop body 10 times
  if (r > 1L) r -= 1;  // Iteration 1
  if (r > 1L) r -= 1;  // Iteration 2
  if (r > 1L) r -= 1;  // Iteration 3
  if (r > 1L) r -= 1;  // Iteration 4
  if (r > 1L) r -= 1;  // Iteration 5
  if (r > 1L) r -= 1;  // Iteration 6
  if (r > 1L) r -= 1;  // Iteration 7
  if (r > 1L) r -= 1;  // Iteration 8
  if (r > 1L) r -= 1;  // Iteration 9
  if (r > 1L) r -= 1;  // Iteration 10

  printf("checksum = %X\n", r);
  return 0;
}
