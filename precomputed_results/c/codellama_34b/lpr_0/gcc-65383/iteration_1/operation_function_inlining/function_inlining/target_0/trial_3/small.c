
#include <iostream>

typedef unsigned d;
d g;
unsigned h2 = 0x92A1D2CDL;

d fn2() {
  if (h2)
    return 0xC3L;
  g = 0x06D7L;
  return g;
}

int main() {
  fn2();
  return 0;
}
