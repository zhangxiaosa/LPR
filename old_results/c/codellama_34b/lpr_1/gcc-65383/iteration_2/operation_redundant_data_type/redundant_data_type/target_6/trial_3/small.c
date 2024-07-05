
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;

int fn2() {
  for (;;) {
    int var = 0x06D7;
    if (h0)
      return 0xC3;
    g = var[var][var][var];
  }
}

int main() { fn2(); }
