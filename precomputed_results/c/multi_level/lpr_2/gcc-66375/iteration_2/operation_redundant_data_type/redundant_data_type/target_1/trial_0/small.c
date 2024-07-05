#include <stdio.h>

unsigned v3;

int main() {
  int d = 2L;
  for (; d < 51; ++d) {
    v3 = d;
    int p1 = v3;
    int fn2 = p1;
    d = fn2 + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", d);
  return 0;
}