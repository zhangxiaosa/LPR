
#include <iostream>

int g;
int h0 = 0x92A1D2CD;
static int i = 0x06D7;

int fn2() {
  for (;;) {
    int q = 0xC3;
    int r[5][9][5];
    if (h0)
      return q;
    g = r[i][i][i];
  }
}

int main() {
  g = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 5; k++) {
        r[i][j][k] = 0;
      }
    }
  }
  fn2();
  return 0;
}
