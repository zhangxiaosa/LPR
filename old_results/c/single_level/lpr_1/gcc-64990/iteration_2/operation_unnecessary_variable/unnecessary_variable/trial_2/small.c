#include <stdio.h>

static short g = 0x7EBA;
unsigned h = 0xCA;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];
int n;

unsigned fn1(signed, short, signed);
signed fn2();
unsigned fn3() {
  fn1(fn2(0), 7, 0);
  return n;
}

unsigned fn1(signed p1, short p2, signed p4) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

signed fn2(p1) {
  int w = 0x709BFC8A;
  for (short i = 0;;) {
    if (k)
      break;
    return m[g][l][l];
  }
  if (h)
    ;
  else
    return j[g][g];
  for (; p1;) {
  }
  return w;
}

int main() {
  fn1(fn2(0), 7, 0);
  return n;
}