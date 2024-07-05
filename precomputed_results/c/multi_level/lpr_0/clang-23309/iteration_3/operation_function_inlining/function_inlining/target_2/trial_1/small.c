#include <stdio.h>

long v;
short w;
short ac = 1L;

int main() {
  int an;
  for (w = 3; w; w--) {
    if (an = 250) {
      if ((0xBCD1L + ac - an + 0xECL) & 1UL)
        v = 1UL;
    }
  }

  printf("checksum = %X\n", v);
  return 0;
}