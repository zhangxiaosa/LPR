#include <stdio.h>

int t;
long v;
short w;
short ac = 1;

char fn4(char p1, char p2) {
  return p1;
}

int main() {
  int an;

  // Iteration 1 (w = 3)
  an = 250;
  t = ac || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - t & 1)
    v = 1;

  // Iteration 2 (w = 2)
  an = 250;
  t = ac || (an = w) == 0x294A85636008822D;
  ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - t & 1)
    v = 1;

  // Iteration 3 (w = 1)
  an = 250;
  t = ac || (an = w) == 0x294A85636008822D;
  ao = 0xBCD1;
  if ((ao - fn4(1 - an, 0xEC)) - t & 1)
    v = 1;

  int p = v;
  printf("checksum = %X\n", p);
  return 0;
}