#include <stdio.h>

int main() {
  int i;
  short r = 0;

  while (r > 1L) r -= 1;  // Unroll Loop 1
  while (r > 1L) r -= 1;  // Unroll Loop 2
  while (r > 1L) r -= 1;  // Unroll Loop 3
  while (r > 1L) r -= 1;  // Unroll Loop 4
  while (r > 1L) r -= 1;  // Unroll Loop 5
  while (r > 1L) r -= 1;  // Unroll Loop 6
  while (r > 1L) r -= 1;  // Unroll Loop 7
  while (r > 1L) r -= 1;  // Unroll Loop 8
  while (r > 1L) r -= 1;  // Unroll Loop 9
  while (r > 1L) r -= 1;  // Unroll Loop 10

  printf("checksum = %X\n", r);
  return 0;
}