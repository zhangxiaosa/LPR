#include <stdio.h>

unsigned h;

void fn2(int p1) {
  h = p1;
}

int main() {
  short o;
  short q = o;
  int s = 1L;

  // Loop unrolling
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  // Loop unrolling
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  // Loop unrolling
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  // Loop unrolling
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  // Loop unrolling
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  // Call fn2 function
  fn2(q);

  // Print checksum
  printf("checksum = %X\n", h);

  // Return 0
  return 0;
}