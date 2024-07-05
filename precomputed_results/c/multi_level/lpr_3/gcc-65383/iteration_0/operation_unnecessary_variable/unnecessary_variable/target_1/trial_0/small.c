#include <stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;
    // Variable r is not used after this loop
  }
}

int main() {
  fn2();
}