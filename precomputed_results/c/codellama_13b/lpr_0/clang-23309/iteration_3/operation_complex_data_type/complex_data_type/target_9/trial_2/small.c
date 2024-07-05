c
#include <stdio.h>

unsigned short w_high = 0x294A;
unsigned short w_low = 0x8563;
unsigned short ac = 1;

unsigned fn2(unsigned p1, unsigned short p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, unsigned short p2) {
  return p2;
}

unsigned fn10(unsigned p1, unsigned short p2) {
  unsigned int an = 250;
  p2 = ac || (an = w_high) == 0x294A;
  v = fn2((unsigned short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
  return v;
}

unsigned fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
