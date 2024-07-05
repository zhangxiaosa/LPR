#include <stdio.h>

int main() {
  int i = 10;
  short r = 0;
  for (; i < 10; i++)
    while (r > 1L)
      r -= 1;
  printf("checksum = %X\n", r);
  return 0;
}
