#include<stdio.h>

unsigned p;
unsigned u;

int main() {
  int d = 2L;

  for (; u < 46; u += 5) {
    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;

    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;

    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;

    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;

    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;
  }

  for (; u < 51; ++u) {
    p = d;
    d = (char)p;
    d = d + 0x9EE7F9D1C772505B;
  }

  printf("checksum = %X\n", p);
  return 0;
}
