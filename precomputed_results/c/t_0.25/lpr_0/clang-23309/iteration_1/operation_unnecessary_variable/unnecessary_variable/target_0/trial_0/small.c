#include <stdio.h>

unsigned long v;
short ac = 1L;

int main() {
  short ao = 0xBCD1L;

  if ((ao - 1L) & 1UL)
    v = 1UL;

  printf("checksum = %lu\n", v);
  return 0;
}
