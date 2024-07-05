#include <stdio.h>

volatile unsigned m[5][8];

void inline_fn3() {
  volatile unsigned p1 = 0x4F;

  for (;;) {
    for (volatile unsigned l = 0; l < 20; l++) {
      for (volatile unsigned k = 0; k >= -27; k = k - 6) {
        p1 = 0x4F - p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() {
  inline_fn3();
  return 0;
}