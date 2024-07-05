#include <stdio.h>

unsigned u;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = (char)d;
    d = d + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", d);
  return 0;
}
