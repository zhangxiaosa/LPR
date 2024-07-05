#include <stdio.h>

short v;
short w = 3;

short fn11() {
  for (; w; w -= 1) {
    if (250) {
      short p3 = 0;
      if (0xBCD1 - (1 - 250) - p3 & 1)
        v = 1;
    }
  }
  return 1;
}

int main() {
  fn11();
  printf("checksum = %X\n", v);
  return 0;
}