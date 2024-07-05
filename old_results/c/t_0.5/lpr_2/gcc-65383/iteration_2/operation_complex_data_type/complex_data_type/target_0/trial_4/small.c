#include <stdio.h>

unsigned g;
unsigned h2_1 = 0x92;
unsigned h2_2 = 0xA1;
unsigned h2_3 = 0xD2;
unsigned h2_4 = 0xCD;

int fn2() {
  for (;;) {
    unsigned r[5][9][5];
    if (h2_1 || h2_2 || h2_3 || h2_4)
      return 0xC3L;
    g = r[0x06D7][0x06D7][0x06D7];
  }
}

int main() {
  fn2();
}
