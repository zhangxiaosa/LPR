#include <stdio.h>

static short g = 0x7EBA;
unsigned h = 0xCA;
short i;
int j_new[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(signed p1, short p2);
signed fn2(int);
unsigned fn3() {
  fn1(fn2(0), 7);
  return 0;
}

unsigned fn1(signed p1, short p2) {
  p1 || (m[1][0][1] = 0);
  return 2;
}

signed fn2(p1) {
  unsigned v[6][3][2];
  for (i = 0;;) {
    if (k)
      break;
    return v[g][l + 1][l];
  }
  if (h)
    ;
  else
    return j_new[g][g];
  for (; p1;) {
  }
  return 0x709BFC8A;
}

int main() { fn3(); }
