#include <stdio.h>

long v;
short ac = 1L;

int main() {
  int p2;
  short ao = 0xBCD1L;

  if (0) {
    p2 = ac || 0;
    if ((ao - (1L - 0)) - p2 & 1UL)
      v = 1UL;
  }

  printf("checksum = %lX\n", v);
  return 0;
}
