#include <stdio.h>

int t;
short u;
short w;
short ac_p = 1;

short fn6_p1(short p1, short p2) { return p1 - p2; }

unsigned fn10_p1(unsigned p1, unsigned p2) {
  for (w = 3; w; w -= 1) {
    p2 = ac_p;
    short ao = 0xBCD1;
    if ((ao - fn6_p1(1, 0)) - p2 & 1)
      return 1;
  }
  return 3;
}

int fn13() {
  fn10_p1(u, t);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %d\n", 1);  // Optimized out: direct use of constant value
  return 0;
}