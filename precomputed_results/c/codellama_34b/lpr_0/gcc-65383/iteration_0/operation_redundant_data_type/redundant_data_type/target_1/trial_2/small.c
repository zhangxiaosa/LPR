
#include <stdio.h>

typedef unsigned int c;
typedef unsigned int d;

d g;
c h[] = {0x92A1D2CD, 0x92A1D2CD, 0x92A1D2CD};
static d i = 0x06D7;

d fn2() {
  for (;;) {
    c q = 0xC3;
    c r[5][9][5];
    if (h[2])
      return q;
    g = r[i][i][i];
  }
}

int main() {
  fn2();
  return 0;
}
