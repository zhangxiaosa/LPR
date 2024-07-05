#include <stdio.h>

unsigned h;

void fn2(int p1) {
  h = (unsigned)p1;
}

short o;

int main() {
  short q = o;
  int s = 1L;

  // Unrolled loop body
  if (q > s)
    q -= 1;
  if (q > s)
    q -= 1;
  if (q > s)
    q -= 1;
  if (q > s)
    q -= 1;
  if (q > s)
    q -= 1;
  if (q > s)
    q -= 1;

  fn2(q);
  printf("checksum = %X\n", h);
  return 0;
}