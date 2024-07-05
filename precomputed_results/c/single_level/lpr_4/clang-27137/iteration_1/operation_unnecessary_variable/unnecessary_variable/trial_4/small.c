#include <stdio.h>

unsigned h;

void fn2(short p1) {
  h = p1;
}

void fn3(short p1) {
  fn2(p1);
}

short o;

int main() {
  short q;
  short r = o;
  q = r;
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

  fn3(q);
  printf("checksum = %X\n", h);
  return 0;
}