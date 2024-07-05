#include <stdio.h>

typedef long c;
char fn4(unsigned p1, unsigned p2) { return p1; }

short p;
int t;
short w;
short ac = 1;

int main() {
  c am = 1;
  int an;
  short ao = 0xBCD1;

  // Unrolled loop iteration 1
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(am - an, 0xEC) - t) % 2)
      p = 1;
  }

  // Unrolled loop iteration 2
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(am - an, 0xEC) - t) % 2)
      p = 1;
  }

  // Unrolled loop iteration 3
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(am - an, 0xEC) - t) % 2)
      p = 1;
  }

  printf("checksum = %X\n", p);
  return 0;
}