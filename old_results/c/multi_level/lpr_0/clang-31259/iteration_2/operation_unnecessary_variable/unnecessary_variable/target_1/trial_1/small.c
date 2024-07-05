#include <stdio.h>

int main() {
  int s;
  s ^= 4294967295;
  printf("checksum = %X\n", s);
  return 0;
}