#include <stdio.h>

unsigned p;
short w;

int main() {
  for (w = 3; w; w -= 1) {
    if (false) {
      if ((0xEC - 1UL) & 1UL) {
        p = 1UL;
      }
    }
  }

  printf("checksum = %u\n", p);

  return 0;
}