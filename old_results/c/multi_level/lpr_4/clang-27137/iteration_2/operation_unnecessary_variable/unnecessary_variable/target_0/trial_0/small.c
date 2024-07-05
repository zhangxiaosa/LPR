#include <stdio.h>

int main() {
  long q;
  q = 0;
  while (q > 1L)
    q -= 1;
  printf("checksum = %lX\n", q);
  return 0;
}