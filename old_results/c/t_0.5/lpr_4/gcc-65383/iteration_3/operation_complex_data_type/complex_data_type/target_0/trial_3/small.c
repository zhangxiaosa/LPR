#include <stdio.h>

unsigned g;
int h_2 = 0x92A1D2CDL;

signed fn1() {
  for (;;) {
    int r_0[5][9][5];
    int r_1[5][9][5];
    int r_2[5][9][5];
    int r_3[5][9][5];
    int r_4[5][9][5];

    int (*r[5])[9][5] = {r_0, r_1, r_2, r_3, r_4};

    if (h_2)
      return 0xC3L;

    g = (*r[0x06D7L])[0x06D7L][0x06D7L];
  }
}

int main() {
  fn1();
}