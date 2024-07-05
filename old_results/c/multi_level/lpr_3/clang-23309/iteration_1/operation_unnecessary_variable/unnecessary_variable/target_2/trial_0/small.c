#include <stdio.h>

int t;
short u;
long v; // optimized out: unused variable
short w;
short ac_p = 1;

short fn6_p1(short p1, short p2) { return p1 - p2; }

unsigned fn10_p1(unsigned p1, unsigned p2) {
  for (w = 3; w; w -= 1)
    if (w == 0x294A85636008822) {
      p2 = ac_p;
      short ao = 0xBCD1;
      if ((ao - fn6_p1(1, 250)) - p2 & 1)
        v = 1; // optimized out: unreachable code
    }
  return 3; // optimized out: constant propagation
}

int fn13() {
  fn10_p1(u, t);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %lX\n", v); // optimized out: use v directly
  return 0;
}