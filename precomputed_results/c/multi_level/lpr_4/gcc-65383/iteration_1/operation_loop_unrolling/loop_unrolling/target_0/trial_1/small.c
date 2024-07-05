#include <stdio.h>

unsigned g;
int h_2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  int r[5][9][5];

  if (h_2)
    return 0xC3L;

  g = r[i][i][i];
}

int main() {
  fn2();
}