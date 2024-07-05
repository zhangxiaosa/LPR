#include <stdio.h>

long v;
short ac = 1L;

int main() {
  if (250UL) {
    int p2 = ac || 0;
    short ao = 0xBCD1L;
    if ((ao - (1L - 0)) - p2 & 1UL)
      v = 1UL;
  }
  printf("checksum = %lX\n", v);
  return 0;
}