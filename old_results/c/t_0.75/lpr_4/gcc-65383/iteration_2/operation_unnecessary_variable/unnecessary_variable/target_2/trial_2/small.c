#include <stdio.h>

int g;
int h2 = 0x92A1D2CDL;

int fn2() {
  if (h2)
    return 0xC3L;

  g = 0;

  for (;;) {
    g = g;
  }
}

int main() {
  fn2();
}
