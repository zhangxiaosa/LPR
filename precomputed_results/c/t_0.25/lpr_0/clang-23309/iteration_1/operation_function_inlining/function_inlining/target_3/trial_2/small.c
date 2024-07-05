#include <stdio.h>

unsigned p;
long v;

int main() {
  if (250UL == 250UL) {
    if ((0xBCD1L - (1L - 0)) - 0 & 1UL)
      p = 1UL;
  }
  printf("checksum = %X\n", p);
  return 0;
}