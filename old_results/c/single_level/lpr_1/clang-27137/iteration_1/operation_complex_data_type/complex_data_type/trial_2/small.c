#include <stdio.h>

unsigned h;
short o;

int main() {
  short q;
  short r = o;
  q = r;
  int s = 1L;

  for (; q > s; q -= 1);

  h = q;
  printf("checksum = %X\n", h);

  return 0;
}
