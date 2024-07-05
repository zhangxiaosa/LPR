#include <stdio.h>

short v;
short ac_p = 1;

short fn6_p1(short p1, short p2) { return p1 - p2; }

unsigned fn10_p1(unsigned p1, unsigned p2) {
  int al = 3;
  long am = 1;
  int an;
  for (short w = 3; w; w -= 1) {
    if (an = 250) {
      p2 = ac_p || (an = w) == 0x294A85636008822;
      short ao = 0xBCD1;
      if ((ao - (fn6_p1(am, an) - 0xEC)) - p2 & 1)
        v = 1;
    }
  }
  return al;
}

int fn13() {
  fn10_p1(u, t);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
