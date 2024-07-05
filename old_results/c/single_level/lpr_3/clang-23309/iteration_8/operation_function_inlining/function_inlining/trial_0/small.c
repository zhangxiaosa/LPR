#include <stdio.h>

unsigned p;
int v;
short w;
short ac = 1L;

int main() {
  int am = 1L;
  unsigned ao = 0xBCD1;
  for (w = 3; w; w -= 1) {
    unsigned an = 250UL;
    unsigned p2 = ao - (am - an) - 0xECL;
    if ((ao - (am - an) - 0xECL) - p2 & 1UL) {
      v = 1;
    }
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}