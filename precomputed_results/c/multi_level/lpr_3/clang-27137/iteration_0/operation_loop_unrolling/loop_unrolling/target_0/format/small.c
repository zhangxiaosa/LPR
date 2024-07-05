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
  while (q > s)
    q -= 1;
  
  // Unrolled loop iteration 2
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 3
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 4
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 5
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 6
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 7
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 8
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 9
  while (q > s)
    q -= 1;

  // Unrolled loop iteration 10
  while (q > s)
    q -= 1;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}