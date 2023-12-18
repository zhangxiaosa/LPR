#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];

  if (0 <= 7) {
    // loop body repetition 1
    g = 1;
  }
  if (1 <= 7) {
    // loop body repetition 2
    g = 2;
  }
  // ...
  if (N <= 7) {
    // loop body repetition N
    g = N + 1;
  }

  return g;
}

int main() {
  if (fn4(g, g, 0x57638FF4, g))
    ;
}
