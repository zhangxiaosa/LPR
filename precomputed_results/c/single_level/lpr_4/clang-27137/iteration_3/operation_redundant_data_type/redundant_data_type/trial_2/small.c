#include <stdio.h>

unsigned short h;
short o;

int main() {
  unsigned short q = o;
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