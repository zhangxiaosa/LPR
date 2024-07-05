#include <stdio.h>

unsigned h;
void fn2(p1) { h = p1; }
short o;

int main() {
  short q = o;
  int s = 1L;

  // Loop unrolling
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  fn2(q);
  printf("checksum = %X\n", h);
  return 0;
}