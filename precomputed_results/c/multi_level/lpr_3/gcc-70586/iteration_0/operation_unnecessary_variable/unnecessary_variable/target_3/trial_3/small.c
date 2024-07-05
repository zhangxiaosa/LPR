#include <stdio.h>

short fn3(int p1) {
  return (0x60781BCDL >= 0x809C ^ 4294967287UL) - 0xE576516E;
}

void fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}
