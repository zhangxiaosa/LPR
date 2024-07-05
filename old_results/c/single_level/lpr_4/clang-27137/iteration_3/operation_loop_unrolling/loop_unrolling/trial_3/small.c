#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = o;

  q = q - 6;

  h = q;
  printf("checksum = %X\n", h);
  return 0;
}
