#include <stdio.h>

int main() {
  short r = 0;
  while (r > 1L)
    r -= 1;
  printf("checksum = %X\n", r);
  return 0;
}