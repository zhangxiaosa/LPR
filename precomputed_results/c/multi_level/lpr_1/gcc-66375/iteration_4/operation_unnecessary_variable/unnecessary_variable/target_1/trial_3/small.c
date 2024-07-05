#include <stdio.h>

short u;

int main() {
  short d_ = 2;
  for (; u < 51; ++u) {
    d_ = (char)d_ + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", d_);
  return 0;
}