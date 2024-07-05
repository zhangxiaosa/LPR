#include <stdio.h>

unsigned h;
short o;

inline void fn2(int p1) { h = p1; }

int main() {
  short q = o;

  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;
  while (q > 1)
    q -= 1;

  h = q;

  printf("checksum = %X\n", h);

  return 0;
}