#include <stdio.h>

short u;
short v;
short w;
short ac_p = 1;

short fn6_p1(short p1, short p2) {
  return p1 - p2;
}

unsigned fn10_p1(unsigned p1, unsigned p2) {
  for (w = 3; w; w -= 1) {
    p2 = ac_p || (3 == 0x294A85636008822);
    if (((0 - fn6_p1(1, 3)) - p2) & 1) {
      v = 1;
    }
  }
  return 3;
}

int fn13() {
  fn10_p1(u, 3);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %lX\n", v);
  return 0;
}