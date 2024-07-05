#include <stdio.h>

static short g = 0x7EBA;
unsigned h = 0xCA;
short i;
int j_new[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(signed p1, short p2) {
  p1 || (m[1][0][1] = 0);
  return 2;
}

unsigned fn3() {
  fn1(p1 || (m[1][0][1] = 0), 7);
  return 0;
}

int main() {
  fn3();
  return 0;
}
