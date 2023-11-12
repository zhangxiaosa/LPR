#include <stdio.h>

long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
unsigned g;
short a = 1;

int main() {
  int c;
  g = 3;
  c = 250U;
  short d = -16943;
  if (((d + c + a - 1U) & 1) != 0)
    f = 1L;

  printf("checksum = %lu\n", f);
  return 0;
}