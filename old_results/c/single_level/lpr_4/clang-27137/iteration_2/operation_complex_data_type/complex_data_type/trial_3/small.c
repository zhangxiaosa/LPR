#include <stdio.h>

unsigned int h;

void fn2(int p1) {
  h = (unsigned int)p1;
}

short int o;

int main() {
  short int q = o;
  int s = 1L;

  while (q > s) {
    q -= 1;
  }

  while (q > s) {
    q -= 1;
  }

  while (q > s) {
    q -= 1;
  }

  while (q > s) {
    q -= 1;
  }

  while (q > s) {
    q -= 1;
  }

  while (q > s) {
    q -= 1;
  }

  fn2((int)q);

  printf("checksum = %X\n", h);

  return 0;
}