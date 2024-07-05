#include <stdio.h>

unsigned p;
short ac = 1L;

char fn4(char p1, char p2) { return p1; }

int fn13() {
  short ao = 0xBCD1L;
  for (short w = 3; w; w -= 1) {
    if (1) {
      short t = ac || (w == 0x294A85636008822DLL);
      if ((ao - fn4(1L - w, 0xECL)) - t & 1UL)
        1UL;
    }
  }
  return 0;
}

int main() {
  fn13();
  p = 1UL;
  printf("checksum = %X\n", p);
  return 0;
}