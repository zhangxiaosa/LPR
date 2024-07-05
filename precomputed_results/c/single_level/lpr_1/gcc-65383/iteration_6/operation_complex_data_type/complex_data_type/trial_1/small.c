#include <stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;

signed fn1() {
  for (;;) {
    int r[5][9][5];
    int x = 0x06D7L;
    int y = 0x06D7L;
    int z = 0x06D7L;

    if (h2)
      return 0xC3L;

    g = r[x][y][z];
  }
}

signed main() {
  fn1();
}
