#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int r;
unsigned t;

int main() {
  fn1(0, 5);
  r = t % (5 / 0);
}
