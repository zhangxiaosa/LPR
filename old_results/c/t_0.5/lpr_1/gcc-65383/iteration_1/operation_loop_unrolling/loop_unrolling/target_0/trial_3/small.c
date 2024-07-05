#include <iostream>

unsigned g;
int h2 = 0x92A1D2CDL;

unsigned fn2() {
  int r[5][9][5];

  // Unrolled iteration 1
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // Unrolled iteration 2
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // Unrolled iteration 3
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // Unrolled iteration 4
  g = r[0x06D7L][0x06D7L][0x06D7L];

  return 0xC3L;
}

int main() {
  fn2();
}