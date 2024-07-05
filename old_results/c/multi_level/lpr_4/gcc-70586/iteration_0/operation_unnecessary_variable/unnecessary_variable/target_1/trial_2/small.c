#include <stdio.h>

unsigned fn3(p1) {
  short m = 0x809C;
  unsigned o = 0xE576516E;
  p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {}
