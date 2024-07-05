
#include <stdio.h>

typedef unsigned int d;
d g;
unsigned h0 = 0x92A1D2CDL;
unsigned h1 = 0x92A1D2CDL;
unsigned h2 = 0x92A1D2CDL;
static d i = 0x06D7L; // changed from unsigned int to d

unsigned fn2() {
  for (;;) {
    unsigned q = 0xC3L;
    unsigned r[5 * 9];
    if (h2)
      return q;
    g = r[i]; // changed from i to i.d
  }
}

int main() { fn2(); }
