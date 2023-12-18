#include <stdio.h>

long v;
short w;
short ac_p = 1;
short fn6_p1(short p1, short p2) { return p1 - p2; }

int main() {
  short ao = 0xBCD1;
  short u;

  for (w = 3; w; w -= 1) {
    if (250) {
      u = ac_p;

      if ((ao - fn6_p1(1, 250)) - u & 1)
        1;
    }
  }

  printf("checksum = %lX\n", 1);
  return 0;
}