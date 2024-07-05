
#include <stdio.h>

void fn1(s_short p1, int p2) { printf("checksum = %X\n", p1); }

s_short fn2(s_short p1, s_short p2) { return p1 - p2; }

s_short fn3(s_short p1, s_short p2) { return p1 - p2; }

s_short fn5(s_short p1, s_short p2) { return p2; }

s_short fn6(s_short p1, s_short p2) { return p1 - p2; }

void fn9(s_short p1, char *p2) { p = p1; }

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
