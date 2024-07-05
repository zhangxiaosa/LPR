#include <stdio.h>

unsigned h;
short o;

int main() {
  h = o;
  printf("checksum = %X\n", h);
  return 0;
}
