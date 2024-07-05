#include <stdio.h>

unsigned h;
int main() {
  short q = 0;
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