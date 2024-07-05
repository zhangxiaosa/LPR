#include <stdio.h>

unsigned p;
unsigned u;

int main() {
  for (; u < 51; ++u) {
    p = 2L;
    p = (char)p;
    p = p + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", p);
  return 0;
}
