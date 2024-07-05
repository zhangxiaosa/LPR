#include <stdio.h>

unsigned int fn3(unsigned short);

int fn4() {
  if (fn3(1))
    ;
}

unsigned int fn3(unsigned short p1) {
  int l;
  unsigned short m = 0x809C;
  unsigned int o0 = 0xE576516E;
  if (i)
    printf("l_1179=%d\n", l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o0;
  if (i)
    printf("l_1179=%d\n", l);
  return p1;
}

int main() { fn4(); }
