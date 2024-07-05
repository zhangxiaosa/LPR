#include <stdio.h>

long v;
short w;
short ac_p = 1;

short fn6_p1(short p1, short p2) {
  return p1 - p2;
}

int main() {
  int an;
  short ao = 0xBCD1;

  v = 0;

  if ((ao - fn6_p1(1, 250)) - 0 & 1)
    v = 1;

  if ((ao - fn6_p1(1, 250)) - 0 & 1)
    v = 1;

  if ((ao - fn6_p1(1, 250)) - 0 & 1)
    v = 1;

  printf("checksum = %lX\n", v);
  return 0;
}