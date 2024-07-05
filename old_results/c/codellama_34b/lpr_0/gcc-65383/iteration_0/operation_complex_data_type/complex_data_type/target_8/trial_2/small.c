
#include <stdio.h>

typedef unsigned d;
d g;
unsigned h0 = 0x92A1D2CDL;
unsigned h1 = 0x92A1D2CDL;
unsigned h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = r[i];
  }
}

int main() { fn2(); }
