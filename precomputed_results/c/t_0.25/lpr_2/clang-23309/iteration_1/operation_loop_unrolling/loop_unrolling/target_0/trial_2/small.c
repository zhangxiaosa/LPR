#include <stdio.h>

short fn4(short p1, short p2) {
  return p1;
}

int main() {
  short an = 250;
  long ac = 1L;
  long v = 0;
  
  // First iteration
  if (an == 250) {
    ac || (an = 3);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 0;
  }
  
  // Second iteration
  if (an == 250) {
    ac || (an = 2);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 0;
  }
  
  // Third iteration
  if (an == 250) {
    ac || (an = 1);
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an, 0xECL)) - ac & 1)
      v = 1;
  }
  
  printf("checksum = %ld\n", v);
  return 0;
}