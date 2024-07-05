#include <stdio.h>

int i;

short fn3(void) {
  if (i)
    printf("l_1179=%d\n", 0x809C);
  short p1 = (0x60781BCDL >= 0x809C ^ 4294967287UL) - 0xE576516E;
  if (i)
    printf("l_1179=%d\n", 0x809C);
  return p1;
}

void fn4() {
  if (fn3())
    ;
}

int main() {
  fn4();
}