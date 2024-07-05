#include <stdio.h>

unsigned int i;

unsigned int fn3(unsigned int p1) {
  int l_1179;
  short m_1179 = 0x809C;
  unsigned int o_1179 = 0xE576516E;
  if (i)
    printf("l_1179=%d\n", l_1179);
  p1 = (0x60781BCD >= m_1179 ^ 4294967287UL) - o_1179;
  if (i)
    printf("l_1179=%d\n", l_1179);
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}