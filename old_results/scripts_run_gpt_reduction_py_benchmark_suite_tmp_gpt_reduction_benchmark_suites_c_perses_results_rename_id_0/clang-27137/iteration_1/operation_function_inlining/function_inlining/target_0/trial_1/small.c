#include <stdio.h>

int main() {
  char p;
  short q;
  int i;
  short r = 0;
  q = r;
  int s = 1L;

  while (q > s)
    q -= 1;

  p = q;
  printf("checksum = %X\n", p);

  return 0;
}