#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;
d h;
b o;

int main() {
  b q;
  int i;
  b r = o;

  q = r;
  c s = 1L;

  // Unrolled loop iteration 1
  q -= 1;

  // Unrolled loop iteration 2
  q -= 1;

  // Unrolled loop iteration 3
  q -= 1;

  // Unrolled loop iteration 4
  q -= 1;

  // Unrolled loop iteration 5
  q -= 1;

  // Unrolled loop iteration 6
  q -= 1;

  // Unrolled loop iteration 7
  q -= 1;

  // Unrolled loop iteration 8
  q -= 1;

  // Unrolled loop iteration 9
  q -= 1;

  // Unrolled loop iteration 10
  q -= 1;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}