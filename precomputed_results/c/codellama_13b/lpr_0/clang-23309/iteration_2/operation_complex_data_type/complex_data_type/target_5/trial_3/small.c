c
#include <stdio.h>

unsigned fn2_optimized(unsigned p1, short p2) { return p1 - p2; }

unsigned fn5(short p1, short p2) { return p2; }

unsigned fn6_optimized(unsigned p1, short p2) { return p2; }

unsigned p;
void fn9(unsigned p1_int, char *p2_str) { p = p1_int; }

unsigned v;
short w;
short ab;
short ac = 1;

unsigned fn10(unsigned p1_int, short p2_short) {
  int an_int = 250;
  p2 = fn5(ab, ac) || (an_int = w) == 0x294A85636008822D;
  short ao_short = 0xBCD1;
  v = fn2_optimized(ao_short - (fn6_optimized(1, an_int) & 1) << 8, p2_short) & 1;
  return v;
}

unsigned fn13() {
  fn10(v, v);
  return 1;
}

int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
