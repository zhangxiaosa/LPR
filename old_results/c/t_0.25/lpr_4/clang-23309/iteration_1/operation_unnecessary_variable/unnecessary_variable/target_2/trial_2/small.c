#include <stdio.h>

short ac = 1;

int main() {
  for (short w = 3; w; w -= 1) {
    if (((short)(0xBCD1) - (short)(1 - 250)) - ac & 1)
      ;
  }

  printf("checksum = %d\n", 0);

  return 0;
}