#include <stdio.h>

long v = 0;
short w = 3;
short ac_p = 1;

short fn6_p1(short p1, short p2) {
  return p1 - p2;
}

int main() {
  int an;
  short ao = 0xBCD1;
  short u;

  while (w) {
    if (an == 250) {
      u = ac_p || (an = w) == 0x294A85636008822;

      if ((ao - fn6_p1(1, an)) - u & 1) {
        v = 1;
        break;
      }
    }
    w--;
  }

  printf("checksum = %lX\n", v);
  return 0;
}