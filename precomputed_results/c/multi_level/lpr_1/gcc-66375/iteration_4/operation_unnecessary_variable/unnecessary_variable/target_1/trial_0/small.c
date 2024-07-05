#include<stdlib.h>
#include<stdio.h>

short d_ = 2;
int main() {
  for (; u < 51; ++u) {
    d_ = (char)d_ + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %hX\n", d_);
  return 0;
}