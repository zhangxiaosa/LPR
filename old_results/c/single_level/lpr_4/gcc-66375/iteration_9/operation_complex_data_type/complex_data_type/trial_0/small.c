#include <stdio.h>

unsigned int p;
unsigned int u;

int main() {
  unsigned int d_high = 0;
  unsigned int d_low = 2;

  for (; u < 51; ++u) {
    p = (unsigned int)(((unsigned long long)d_high << 32) | d_low);
    d_high = (unsigned int)((char)p);
    d_low = d_high + 0x9EE7F9D1C772505B;
  }

  printf("checksum = %X\n", p);
  return 0;
}