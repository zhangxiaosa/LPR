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
  short ao;
  short checksum = 0;

  // Unrolled loop body 1
  w = 3;
  if (an = 250) {
    ac || (an = w);
    ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  checksum += v;

  // Unrolled loop body 2
  w -= 1;
  if (an = 250) {
    ac || (an = w);
    ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  checksum += v;

  // Unrolled loop body 3
  w -= 1;
  if (an = 250) {
    ac || (an = w);
    ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  checksum += v;

  p = checksum;
  printf("checksum = %X\n", p);
  return 0;
}