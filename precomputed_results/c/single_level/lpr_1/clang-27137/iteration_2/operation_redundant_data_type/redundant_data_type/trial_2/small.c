#include <stdio.h>

unsigned h;
signed short o;

int main() {
  signed short q = o;
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
  h = q;
  printf("checksum = %X\n", h);
  return 0;
}