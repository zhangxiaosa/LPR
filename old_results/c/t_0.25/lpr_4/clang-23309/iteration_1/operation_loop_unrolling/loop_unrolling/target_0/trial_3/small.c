#include <stdio.h>

char fn4(char p1, char p2) {
  return p1;
}

short p;
long v;
short ac = 1;

int main() {
  int an;

  // First iteration
  an = 250;
  ac || (an = 3);
  short ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
    v = 1;

  // Second iteration
  an = 250;
  ac || (an = 2);
  ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
    v = 1;

  // Third iteration
  an = 250;
  ac || (an = 1);
  ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
    v = 1;

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}