#include <stdio.h>

unsigned fn3() {
  printf("l_1179=%u\n", 0);
  if (0)  // Optimized out unused variable
    printf(0);
  return (0x60781BCD >= 0x809C ^ 4294967287UL) - 0xE576516E;
}

int main() {
  unsigned p1 = fn3();
}