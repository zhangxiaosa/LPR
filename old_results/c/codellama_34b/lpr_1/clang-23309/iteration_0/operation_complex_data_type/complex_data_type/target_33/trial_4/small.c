c
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(s_short p1, int p2) { printf("checksum = %X\n", p1); }

s_short fn2(s_short p1, s_short p2) { return p1 - p2; }

s_short fn3(s_short p1, s_short p2) { return p1 - p2; }

s_short fn5(s_short p1, s_short p2) { return p2; }

s_short fn6(s_short p1, s_short p2) { return p1 - p2; }

int main() {
  int ap = 0;
  fn13();
  v = 1UL;
  fn1(p, ap);
  return 0;
}
