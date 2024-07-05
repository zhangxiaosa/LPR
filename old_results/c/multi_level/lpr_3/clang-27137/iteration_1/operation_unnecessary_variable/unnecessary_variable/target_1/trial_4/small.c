#include <stdio.h>

unsigned h;
short o;

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
  h = o;
  printf("checksum = %X\n", h);
  return 0;
}