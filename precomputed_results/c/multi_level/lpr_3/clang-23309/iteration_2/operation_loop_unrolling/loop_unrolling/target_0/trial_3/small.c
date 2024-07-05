#include <stdio.h>

short u;
long v;
short ac_p = 1;

short fn6_p1(short p1, short p2) {
  return p1 - p2;
}

int main() {
  int an;

  // First iteration
  u = ac_p || (an = 250) == 0x294A85636008822;
  short ao = 0xBCD1;
  if ((ao - fn6_p1(1, an)) - u & 1) {
    v = 1;
  }

  // Second iteration
  u = ac_p || (an = 249) == 0x294A85636008822;
  ao = 0xBCD1;
  if ((ao - fn6_p1(1, an)) - u & 1) {
    v = 1;
  }

  // Third iteration
  u = ac_p || (an = 248) == 0x294A85636008822;
  ao = 0xBCD1;
  if ((ao - fn6_p1(1, an)) - u & 1) {
    v = 1;
  }

  printf("checksum = %lX\n", v);
  return 0;
}