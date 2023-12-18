#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = 0;
  h = q;
  printf("checksum = %X\n", h);
  return 0;
}