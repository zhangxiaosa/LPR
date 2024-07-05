#include <stdio.h>

short fn4(short p1, short p2) {
  return p1;
}

int main() {
  short w;
  long v = 0;
  short ac = 1L;
  unsigned p;
  int t;
  unsigned u;

  for (w = 3; w; w -= 1) {
    if (250) {
      ac || (w = 250);
      short ao = 0xBCD1L;
      if ((ao - fn4(1L - w, 0xECL)) - ac & 1)
        v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}