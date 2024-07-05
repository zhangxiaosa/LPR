
#include <stdio.h>

int g; // primary data type: integer
int h0 = 0x92A1D2CD; // primary data type: integer
int r[5][9][5]; // primary data type: array of arrays of arrays
int i, j, k; // primary data types: integers

int fn2() {
  for (;;) {
    if (h0)
      return 0xC3;
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 9; j++) {
        for (k = 0; k < 5; k++) {
          r[i][j][k] = 0x06D7;
        }
      }
    }
    g = r[0x06D7][0x06D7][0x06D7];
  }
}

int main() {
  fn2();
  return 0;
}
