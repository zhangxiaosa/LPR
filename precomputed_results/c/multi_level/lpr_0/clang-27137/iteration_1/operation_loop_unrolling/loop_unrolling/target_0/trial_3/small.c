#include <stdio.h>

char p;

int main() {
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;

  // Unrolled loop iterations
  q -= 10; // Iteration 1
  q -= 10; // Iteration 2
  q -= 10; // Iteration 3
  q -= 10; // Iteration 4
  q -= 10; // Iteration 5
  q -= 10; // Iteration 6
  q -= 10; // Iteration 7
  q -= 10; // Iteration 8
  q -= 10; // Iteration 9
  q -= 10; // Iteration 10

  if (p = q)
    ;
  printf("checksum = %X\n", p);
  return 0;
}