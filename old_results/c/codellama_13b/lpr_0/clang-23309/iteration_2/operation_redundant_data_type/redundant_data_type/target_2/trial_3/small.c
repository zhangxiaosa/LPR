
#include <stdio.h>

int main() {
  unsigned p;
  char *p2 = "g_170";
  unsigned v = 1;
  short w = 250;
  short ab = 1;
  short ac = 1;

  // Function 10
  int an = 250;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;

  // Function 13
  fn10(v, p2);

  // Function 9
  p = v;

  // Print checksum
  printf("checksum = %X\n", p);

  return 0;
}
