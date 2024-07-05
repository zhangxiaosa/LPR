#include <stdio.h>

unsigned fn2(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned i;

unsigned fn3(unsigned p1) {
  short m = 0x809C;
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, 0xE576516E);
  return p1;
}

int main() {
  if (fn3(1)) {
    // Code to be executed if fn3(1) returns a true value
  }
}
