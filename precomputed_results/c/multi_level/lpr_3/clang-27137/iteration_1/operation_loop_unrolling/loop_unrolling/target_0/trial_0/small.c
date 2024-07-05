#include<stdio.h>

typedef short b;
typedef unsigned d;

d h;
b o;

int main() {
  b q = o;

  // Loop unrolling (6 iterations)
  q -= 6;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}