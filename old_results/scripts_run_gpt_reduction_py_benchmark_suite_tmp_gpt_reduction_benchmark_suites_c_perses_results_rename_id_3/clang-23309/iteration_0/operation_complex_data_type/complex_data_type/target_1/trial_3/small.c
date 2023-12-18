#include <stdio.h>

short p;
int t2;
short t1;
long v;
short t3;
short ac = 1L;

short fn6(short p1, short p2) {
  return p1 - p2;
}

unsigned fn10(unsigned p1, unsigned p2) {
  int al = 3L;
  long am = 1L;
  int t5;
  for (t3 = 3; t3; t3 -= 1) {
    if (t5 == 250UL) {
      p2 = ac || (t5 = t3) == 0x294A85636008822L;
      short t6 = 0xBCD1L;
      if ((t6 - (fn6(am, t5) - 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  }
  return al;
}

int fn13() {
  unsigned t4 = 1UL;
  fn10(t1, t2);
  return t4;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}