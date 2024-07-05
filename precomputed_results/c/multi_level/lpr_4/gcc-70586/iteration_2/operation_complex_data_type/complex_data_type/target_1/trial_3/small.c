#include <stdio.h>

unsigned i;

int fn4() {
  int l_1179 = 0;
  printf("l_1179=%d\n", l_1179);

  unsigned temp1 = 0x60781BCD >= 0x809C;
  unsigned temp2 = temp1 ^ 4294967287UL;
  unsigned temp3 = temp2 - 0xE576516E;
  unsigned p1 = temp3;

  if (i) {
    printf("%u\n", p1);
  }
  return p1;
}

int main() {
  printf("%d\n", fn4());
  return 0;
}