#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

int main() {
  printf("checksum = %X\n", fn2(1L, 1L));
  return 0;
}