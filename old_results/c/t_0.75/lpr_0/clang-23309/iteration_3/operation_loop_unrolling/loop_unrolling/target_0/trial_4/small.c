#include <stdio.h>

short v;
short fn4(short p1, short p2) {
  return p1;
}

void fn11(short p1, short p2, int p3) {
  int an;

  // First iteration
  p3 = p2 || (an = 3) == 0x294A85636008822DLL;
  short ao = 0xBCD1;
  if (ao - fn4(1 - an, 0xEC) - p3 & 1)
    v = 1;

  // Second iteration
  p3 = p2 || (an = 2) == 0x294A85636008822DLL;
  ao = 0xBCD1;
  if (ao - fn4(1 - an, 0xEC) - p3 & 1)
    v = 1;

  // Third iteration
  p3 = p2 || (an = 1) == 0x294A85636008822DLL;
  ao = 0xBCD1;
  if (ao - fn4(1 - an, 0xEC) - p3 & 1)
    v = 1;
}

int main() {
  short ag = 248;
  fn11(2, ag, 0);
  printf("checksum = %X\n", v);
  return 0;
}