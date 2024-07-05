#include <stdio.h>

unsigned p;
long v;

int main() {
  if (250UL) {
    if ((0xBCD1L - (1L - 0)) - 0 & 1UL)
      v = 1UL;
  }
  p = v;
  printf("checksum = %lx\n", p);
  return 0;
}