
#include <stdio.h>

unsigned int fn2() {
  unsigned int g = 0;
  unsigned int r[5][9][5] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
  static unsigned int i = 0x06D7L;
  g = r[i][i][i];
  return g;
}

int main() {
  fn2();
  return 0;
}
