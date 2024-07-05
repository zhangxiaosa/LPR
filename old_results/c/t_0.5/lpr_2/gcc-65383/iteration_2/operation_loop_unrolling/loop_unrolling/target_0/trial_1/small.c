#include <stdio.h>

unsigned g;
unsigned h2 = 0x92A1D2CD;

int fn2() {
  unsigned r[5][9][5];
  g = r[0x06D7][0x06D7][0x06D7];
}

int main() {
  fn2();
}
