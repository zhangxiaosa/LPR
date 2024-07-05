#include <stdio.h>

unsigned g;

int h2 = 0x92A1D2CDL;

unsigned fn2() {
  int r_flat[225];

  // Loop unrolling (unrolled 4 times)
  g = r_flat[0x06D7L];
  g = r_flat[0x06D7L];
  g = r_flat[0x06D7L];
  g = r_flat[0x06D7L];

  return 0xC3L;
}

int main() {
  fn2();
  return 0;
}