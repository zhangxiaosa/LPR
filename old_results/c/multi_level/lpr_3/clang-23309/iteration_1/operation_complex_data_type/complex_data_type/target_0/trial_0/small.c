#include <stdio.h>

int t;
short u;
long v;
short w;
short ac_p = 1L;

short fn6_p1(short p1, short p2) {
  return p1 - p2;
}

unsigned fn10_p1(unsigned p1, unsigned p2) {
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    if (an == 250UL) {
      p2 = ac_p;
      short ao = 0xBCD1L;
      if ((ao - (fn6_p1(am, an) - 0xECL)) - p2 & 1UL) {
        v = 1UL;
      }
    }
  }
  return 0;
}

int fn13() {
  fn10_p1(u, t);
  return 1;
}

int main() {
  int p;
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}