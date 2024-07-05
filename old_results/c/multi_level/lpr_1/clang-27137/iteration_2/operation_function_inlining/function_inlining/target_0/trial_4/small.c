#include <stdio.h>

int main() {
  int i;
  short r = 0;
  for (i = 0; i < 10; i++)
    while (r > 1L)
      r -= 1;
  printf("checksum = %X\n", r);
  return 0;
}
