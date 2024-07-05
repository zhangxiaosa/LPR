#include <stdio.h>

unsigned int i_1177;

unsigned int fn3(unsigned int p1) {
  int l;
  short m = 0x809C;
  unsigned int o = 0xE576516E;

  if (i_1177)
    printf("l_1179=%d\n", l);

  unsigned int temp1 = 0x60781BCD;
  short temp2 = 0x809C;
  unsigned int temp3 = 4294967287;

  p1 = (temp1 >= temp2 ^ temp3) - o;

  if (i_1177)
    printf("l_1179=%d\n", l);

  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}
