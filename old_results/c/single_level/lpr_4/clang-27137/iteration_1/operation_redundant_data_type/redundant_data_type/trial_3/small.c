#include <stdio.h>

unsigned h;

void fn2(unsigned int p1) { h = p1; }
void fn3(unsigned int p1) { fn2(p1); }

unsigned int o;

int main() {
  unsigned int q;
  unsigned int r = o;
  q = r;
  unsigned int s = 1L;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  while (q > s)
    q -= 1;

  fn3(q);

  printf("checksum = %X\n", h);

  return 0;
}