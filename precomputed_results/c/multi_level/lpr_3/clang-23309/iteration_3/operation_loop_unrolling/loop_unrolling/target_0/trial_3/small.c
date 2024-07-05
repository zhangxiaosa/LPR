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

  // Loop unrolled: Start of unrolled loop iteration 1
  if (an = 250) {
    short u = ac_p || (an = w) == 0x294A85636008822;
    if ((ao - fn6_p1(1, an)) - u & 1)
      v = 1;
  }

  // Start of unrolled loop iteration 2
  if (an = 250) {
    short u = ac_p || (an = w) == 0x294A85636008822;
    if ((ao - fn6_p1(1, an)) - u & 1)
      v = 1;
  }

  // Start of unrolled loop iteration 3
  if (an = 250) {
    short u = ac_p || (an = w) == 0x294A85636008822;
    if ((ao - fn6_p1(1, an)) - u & 1)
      v = 1;
  }

  printf("checksum = %lX\n", v);
  return 0;
}