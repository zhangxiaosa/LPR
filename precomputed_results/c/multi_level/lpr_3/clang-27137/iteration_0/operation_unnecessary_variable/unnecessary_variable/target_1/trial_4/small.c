#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;

d h;
b o;

int main() {
  b q = o; // Optimization: replace 'r' with 'o'

  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;

  h = q;
  printf("checksum = %X\n", h);

  return 0;
}
