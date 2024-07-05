#include <stdio.h>

typedef unsigned d;
unsigned i;

unsigned fn3(unsigned p1) {
  int l;
  short m = 0x809C;
  d o = 0xE576516E;
  if (i)
    printf("l_1179=%d\n", l);
  p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
  if (i)
    printf("l_1179=%d\n", l);
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() { fn4(); }