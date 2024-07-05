
#include <stdio.h>

unsigned fn2_optimized(unsigned p1, short p2) { return p1 - p2; }

unsigned fn6_optimized(unsigned p1, short p2) { return p2; }

unsigned p;
void fn9(unsigned p1, char *p2) { p = p1; }

unsigned fn10(unsigned p1, short p2) {
  short ao = 0xBCD1;
  unsigned v = fn2_optimized(ao - (fn6_optimized(1, p2) & 1) << 8, p2) & 1;
  return v;
}

int main() {
  fn10(v, v);
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
