
<SYS>

#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;
static int i = 0x06D7;

int fn2() {
  int q = 0xC3;
  int r[5][9][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      r[i][j][i] = 0;
    }
  }
  if (h0)
    return q;
  g = r[i][i][i];
}

int main() {
  fn2();
}
