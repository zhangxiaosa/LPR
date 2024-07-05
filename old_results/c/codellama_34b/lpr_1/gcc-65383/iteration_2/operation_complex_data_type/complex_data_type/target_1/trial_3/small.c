
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;

int fn2() {
  int r[5][9][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 5; k++) {
        r[i][j][k] = 0x06D7;
      }
    }
  }
  if (h0)
    return 0xC3;
  g = r[0][0][0];
}

int main() { fn2(); }
