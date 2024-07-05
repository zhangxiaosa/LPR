
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;
static int i = 0x06D7;

void fn2(int h0) {
  for (;;) {
    if (h0)
      return 0xC3;
    g = h0;
  }
}

int main() {
  fn2(h0);
  return 0;
}
