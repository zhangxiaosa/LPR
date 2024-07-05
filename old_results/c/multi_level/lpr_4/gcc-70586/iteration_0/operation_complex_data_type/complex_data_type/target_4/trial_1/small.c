#include <stdio.h>

unsigned i;
unsigned p1_target;

unsigned fn3(unsigned p1) {
  unsigned p1_modified = 0;
  int l;
  short m = 0x809C;
  unsigned o = 0xE576516E;

  if (i)
    printf("l_1179=%d\n", l);

  p1_modified = (0x60781BCD >= m ^ 4294967287UL) - o;

  if (i)
    printf("l_1179=%d\n", l);

  return p1_modified;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  p1_target = fn4();
}