#include <stdio.h>

short ac = 1L;

short fn4(short p1, short p2) {
  return p1;
}

unsigned p;
long v;
short w;

int main() {
  int an;

  // First iteration
  w = 3;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  w -= 1;

  // Second iteration
  w = 2;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  w -= 1;

  // Third iteration
  w = 1;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  w -= 1;

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}