
#include <stdio.h>

unsigned fn2(unsigned p1, short p2) {
  return p1 - p2;
}

unsigned fn5(short p1, short p2) {
  return p2;
}

unsigned fn6(unsigned p1, short p2) {
  return p2;
}

unsigned p;

void fn9(unsigned p1, char *p2) {
  p = p1;
}

unsigned fn10(unsigned p1, short p2) {
  int an = 250;
  p2 = fn5(p2, an) || (an = 1) == 0x294A85636008822D;
  short ao = 0xBCD1;
  p = fn2(ao - (fn6(1, an) & 1) << 8, p2) & 1;
  return p;
}

unsigned fn13() {
  fn10(p, p);
  return 1;
}

int main() {
  fn13();
  fn9(p, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
