#include <stdio.h>

unsigned int h;
short o;

int main() {
  short q = o;

  q -= 6;
  h = q;
  printf("checksum = %X\n", h);

  return 0;
}