#include <stdio.h>

int main() {
  short q;
  q = 0;
  int s = 1L;

  q -= 6;  // Unrolled loop iteration 1
  q -= 6;  // Unrolled loop iteration 2
  q -= 6;  // Unrolled loop iteration 3
  q -= 6;  // Unrolled loop iteration 4
  q -= 6;  // Unrolled loop iteration 5
  q -= 6;  // Unrolled loop iteration 6

  printf("checksum = %X\n", q);
  return 0;
}