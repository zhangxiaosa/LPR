#include <iostream>

unsigned g;
unsigned h2 = 0x92A1D2CD;

int fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = 0x92A1D2CD;
  }
}

int main() {
  fn2();
}