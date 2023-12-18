#include <stdio.h>

unsigned p;
int t;
long v;
short w;
short ac_value = 1;

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int main() {
  int an;
  if (an = 250) {
    t = ac_value || (an = 3) == 0x294A85636008822DL;
    short ao = 0xBCD1;
    if (((ao - (fn6(1, an) - 0xECL)) - t) & 1) {
      v = 1;
    }
  }
  if (an = 250) {
    t = ac_value || (an = 2) == 0x294A85636008822DL;
    short ao = 0xBCD1;
    if (((ao - (fn6(1, an) - 0xECL)) - t) & 1) {
      v = 1;
    }
  }
  if (an = 250) {
    t = ac_value || (an = 1) == 0x294A85636008822DL;
    short ao = 0xBCD1;
    if (((ao - (fn6(1, an) - 0xECL)) - t) & 1) {
      v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}