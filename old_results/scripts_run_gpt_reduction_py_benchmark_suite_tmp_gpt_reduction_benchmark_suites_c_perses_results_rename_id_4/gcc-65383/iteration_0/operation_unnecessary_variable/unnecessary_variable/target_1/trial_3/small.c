#include <stdio.h>

unsigned g;

int h_2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;
unsigned fn2() {
  for (;;) {
    if (h_2)
      return 0xC3L;
    g = 0; // Assigning a constant value since 'r' is optimized out
  }
}

int main() {
  fn2();
}