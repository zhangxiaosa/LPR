#include <stdio.h>

unsigned fn3(short);

int fn4() {
  if (fn3(1))
    ;
}

unsigned fn3(short p1) {
  short m = 0x809CL;
  unsigned o0 = 0xE576516EL;
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o0;
  return p1;
}

int main() {
  fn4();
}
