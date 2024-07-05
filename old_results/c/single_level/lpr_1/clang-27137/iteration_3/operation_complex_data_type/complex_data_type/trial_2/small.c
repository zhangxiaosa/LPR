#include <stdio.h>

unsigned int h;
signed short int o;

int main() {

  signed short int q = o;
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