#include <stdio.h>

int i;

short fn3(int p1) {
  if (i)
    printf("l_1179=%d\n", 0x809C);
  if (i)
    printf("l_1179=%d\n", 0x809C);
  return (0x60781BCDL >= 0x809C ^ 4294967287UL) - 0xE576516E;
}

void fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}
