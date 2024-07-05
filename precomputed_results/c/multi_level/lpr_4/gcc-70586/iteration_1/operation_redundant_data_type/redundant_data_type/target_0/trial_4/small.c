#include <stdio.h>

unsigned fn3(unsigned p1) {
  unsigned o = 0xE576516E;
  printf("l_1179=%d\n", 0);
  p1 = (0x60781BCD >= 0x809C ^ 4294967287UL) - o;
  if (p1)
    printf(0);
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}