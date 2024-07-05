#include <stdio.h>

unsigned p;
unsigned u;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    p = d;
    char p1 = p;
    int p2 = 3;
    d = p1;
    d = d + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", p);
  return 0;
}