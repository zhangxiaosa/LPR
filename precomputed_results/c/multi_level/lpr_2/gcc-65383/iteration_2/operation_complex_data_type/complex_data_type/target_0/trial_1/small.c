#include <stdio.h>

unsigned int g;
int h2 = 0x92A1D2CD;

int fn1() {
  int r[5][9][5];
  if (h2 != 0)
    g = 0xC3;
  g = r[167][167][167];
}

int main() {
  fn1();
}