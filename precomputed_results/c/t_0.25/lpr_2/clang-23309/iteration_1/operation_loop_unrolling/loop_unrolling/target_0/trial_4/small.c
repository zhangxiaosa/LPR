#include <stdio.h>

short fn4(short p1, short p2) { return p1; }

int main() {
  long ac = 1L;
  unsigned p = 0;
  long v = 0;
  short w = 3;

  // Unrolled loop
  {
    int an;

    // Iteration 1
    an = 250;
    if (an == 250) {
      if (ac == 0)
        an = w;
      short ao = 0xBCD1L;
      if (((ao - fn4(1L - an, 0xECL)) - ac) & 1)
        v = 1;
    }

    // Iteration 2
    an = 250;
    if (an == 250) {
      if (ac == 0)
        an = w;
      short ao = 0xBCD1L;
      if (((ao - fn4(1L - an, 0xECL)) - ac) & 1)
        v = 1;
    }

    // Iteration 3
    an = 250;
    if (an == 250) {
      if (ac == 0)
        an = w;
      short ao = 0xBCD1L;
      if (((ao - fn4(1L - an, 0xECL)) - ac) & 1)
        v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}