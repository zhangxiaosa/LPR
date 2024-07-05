
#include <stdio.h>

typedef unsigned int b;

b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static unsigned long int i = 0x06D7L;

unsigned int fn2() {
  for (;;) {
    if (h[2])
      return 0xC3L;
    g = h[i][i][i];
  }
}

int main() { fn2(); }
