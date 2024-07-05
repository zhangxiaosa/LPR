#include <stdio.h>

unsigned h;
short o;
char p;

int main() {
  short q;
  int i, j;
  q = o;
  int s = 1L;

  // Unrolled iterations
  int unrolledIterations = ((q - s) / 10) * 10;
  for (i = 0; i < unrolledIterations; i += 10) {
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
  }

  // Remaining iterations
  int remainingIterations = (q - s) % 10;
  for (j = 0; j < remainingIterations; j++) {
    q -= 1;
  }

  p = q;
  h = p;
  printf("checksum = %X\n", h);
  return 0;
}