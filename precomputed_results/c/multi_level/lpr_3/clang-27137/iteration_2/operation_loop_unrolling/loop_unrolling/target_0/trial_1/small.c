#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = o;

  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}
