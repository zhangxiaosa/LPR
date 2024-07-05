#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 10; i++)
    while (0 > 1L)
      0 -= 1;

  printf("checksum = %X\n", 0);
  return 0;
}