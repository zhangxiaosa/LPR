#include <stdio.h>

unsigned int h;

void fn2(short int p1) {
  h = (unsigned int)p1;
}

void fn3(short int p1) {
  fn2(p1);
}

int main() {
  short int o;
  short int q;
  short int r = o;
  q = r;
  int s = 1L;
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