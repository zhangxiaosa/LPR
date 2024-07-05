#include <stdio.h>

char fn4(char p1, char p2) {
  return p1;
}

short p;
long v;
short w;
short ac = 1;

int main() {
  int an;

  // Unrolled iteration 1
  w = 3;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  // Unrolled iteration 2
  w = 2;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  // Unrolled iteration 3
  w = 1;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}