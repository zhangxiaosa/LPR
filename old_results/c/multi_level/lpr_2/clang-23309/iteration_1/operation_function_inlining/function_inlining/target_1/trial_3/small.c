#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
int t;
long v;
short w;
unsigned ab;
short ac_value = 1;

int fn13() {
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac_value || (an == 0x294A85636008822DL);
    short ao = 0xBCD1;
    if (((ao - 1 - 0xECL - t) & 1) != 0)
      v = 1;
  }
  return 1;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}