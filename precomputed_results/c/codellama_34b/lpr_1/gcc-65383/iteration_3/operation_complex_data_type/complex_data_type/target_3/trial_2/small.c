
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;
int r0 = 0x06D7;
int r1 = 0x06D7;
int r2 = 0x06D7;

int fn2() {
  for (;;) {
    if (h0)
      return 0xC3;
    g = r0 + r1 + r2;
  }
}

int main() {
  fn2();
  return 0;
}
