#include <stdio.h>

int main() {
  short q;
  q = 0;
  int s = 1L;

  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  printf("checksum = %X\n", q);
  return 0;
}