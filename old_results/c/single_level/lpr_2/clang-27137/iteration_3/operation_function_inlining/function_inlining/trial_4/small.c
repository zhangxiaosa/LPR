#include <stdio.h>

int main() {
  short q = 0;
  while (q > 1L)
    q -= 1;
  printf("checksum = %X\n", q);
  return 0;
}
