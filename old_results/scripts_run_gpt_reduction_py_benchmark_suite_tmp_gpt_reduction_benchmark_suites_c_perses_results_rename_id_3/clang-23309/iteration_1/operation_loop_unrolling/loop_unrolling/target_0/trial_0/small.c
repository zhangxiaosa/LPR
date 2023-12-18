#include <stdio.h>

short p;
int t;
short u;
long v;
short w;
short ac_p = 1L;

short fn6_p1(short p1, short p2) { return p1 - p2; }

unsigned fn10_p1(unsigned p1, unsigned p2) {
  int al = 3L;
  long am = 1L;
  int an;

  // Unrolled loop iteration 1
  if (an = 250UL) {
    p2 = ac_p || (an = w) == 0x294A85636008822L;
    short ao = 0xBCD1L;
    if ((ao - (fn6_p1(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 2
  if (an = 250UL) {
    p2 = ac_p || (an = w) == 0x294A85636008822L;
    short ao = 0xBCD1L;
    if ((ao - (fn6_p1(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 3
  if (an = 250UL) {
    p2 = ac_p || (an = w) == 0x294A85636008822L;
    short ao = 0xBCD1L;
    if ((ao - (fn6_p1(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return al;
}

int fn13() {
  fn10_p1(u, t);
  return 1;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}