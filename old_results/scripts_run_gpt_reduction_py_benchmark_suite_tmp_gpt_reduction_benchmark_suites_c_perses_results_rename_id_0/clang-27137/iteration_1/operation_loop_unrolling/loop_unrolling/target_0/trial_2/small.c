#include<stdio.h>

char p;

int main() {
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;

  // Loop unrolling
  // Iteration 0
  while (q > s)
    q -= 1;
  // Iteration 1
  while (q > s)
    q -= 1;
  // Iteration 2
  while (q > s)
    q -= 1;
  // Iteration 3
  while (q > s)
    q -= 1;
  // Iteration 4
  while (q > s)
    q -= 1;
  // Iteration 5
  while (q > s)
    q -= 1;
  // Iteration 6
  while (q > s)
    q -= 1;
  // Iteration 7
  while (q > s)
    q -= 1;
  // Iteration 8
  while (q > s)
    q -= 1;
  // Iteration 9
  while (q > s)
    q -= 1;

  if (p = q)
    ;
  printf("checksum = %X\n", p);
  return 0;
}