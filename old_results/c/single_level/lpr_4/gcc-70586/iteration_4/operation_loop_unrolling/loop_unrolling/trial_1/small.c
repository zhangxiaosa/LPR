#include <stdio.h>

unsigned fn3() {
  printf("l_1179=%u\n", 0);
  unsigned i = 0; // Initialize i

  if (i)
    printf("%u", 0);

  return (0x60781BCD >= 0x809C ^ 4294967287UL) - 0xE576516E;
}

int main() {
  unsigned p1 = fn3();
}