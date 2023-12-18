#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i;
  q = o;
  int s = 1L;

  // Unrolled loop
  // Iteration 0
  if (q > s) q -= 1;
  // Iteration 1
  if (q > s) q -= 1;
  // Iteration 2
  if (q > s) q -= 1;
  // Iteration 3
  if (q > s) q -= 1;
  // Iteration 4
  if (q > s) q -= 1;
  // Iteration 5
  if (q > s) q -= 1;
  // Iteration 6
  if (q > s) q -= 1;
  // Iteration 7
  if (q > s) q -= 1;
  // Iteration 8
  if (q > s) q -= 1;
  // Iteration 9
  if (q > s) q -= 1;

  if (p = q)
    ;
  h = p;
  printf("checksum = %X\n", h);
  return 0;
}