#include <iostream>

unsigned g;
int h_2 = 0x92A1D2CDL;

signed fn1() {
  for (;;) {
    if (h_2)
      return 0xC3L;
    g = 0x06D7L;  // Replaced with the constant value
  }
}

int main() {
  fn1();
}
