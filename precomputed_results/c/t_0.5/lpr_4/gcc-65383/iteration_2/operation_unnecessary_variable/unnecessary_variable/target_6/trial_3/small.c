#include <stdio.h>

unsigned g;
int h_2 = 0x92A1D2CDL;

signed fn1() {
  if (h_2 == 0)
    g = 0xC3L;
  return 0xC3L;
}

int main() {
  fn1();
}