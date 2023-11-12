#include <stdio.h>

int main() {
  unsigned int c;
  for (c = 3; c; c -= 1) {
    if (c == 250U) {
      unsigned int d = 0xBCD1;
      if ((d - 1U - c) & 1) {
        // Do something with d
      }
    }
  }
  printf("checksum = %X\n", /* some value calculated from d */);
  return 0;
}