
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;

int fn2() {
  for (;;) {
    int r = 0x06D7;
    if (h0)
      return 0xC3;
    g = r;
  }
}

int main() { fn2(); }
