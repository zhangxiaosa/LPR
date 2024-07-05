#include <stdio.h>

unsigned p;
int t;
long v;
short w;
short ac = 1L;
char fn4(char p1, char p2) { return p1; }

int main() {
  int an;
  t = ac || (an = 3) == 0x294A85636008822DLL;
  short ao = 0xBCD1L;
  if ((ao - fn4(1L - an, 0xECL)) - t & 1UL)
    v = 1UL;

  t = ac || (an = 2) == 0x294A85636008822DLL;
  ao = 0xBCD1L;
  if ((ao - fn4(1L - an, 0xECL)) - t & 1UL)
    v = 1UL;

  t = ac || (an = 1) == 0x294A85636008822DLL;
  ao = 0xBCD1L;
  if ((ao - fn4(1L - an, 0xECL)) - t & 1UL)
    v = 1UL;

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}