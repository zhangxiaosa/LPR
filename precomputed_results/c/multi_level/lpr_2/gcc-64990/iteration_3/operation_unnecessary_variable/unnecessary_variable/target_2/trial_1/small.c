#include <stdio.h>

static short g = 0x7EBAL;
short i;
short j[5][5];
static unsigned l;
int m[9][2][3];

int fn1(p1) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

int fn2(p1) {
  unsigned v[6][3][2];
  return v[g][l + 1][l];
}

int fn3() {
  fn1(fn2(0));
  return 0;
}

int main() {
  fn3();
}
