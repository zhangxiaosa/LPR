#include <stdio.h>

int main() {
  int h;
  int o;
  int q = o;

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