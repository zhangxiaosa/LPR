#include <stdio.h>

int i;

int fn3(short p1) {
  int l;
  short m = 0x809C;
  if (i) {
    printf("l_1179=%d\n", l);
  }
  int o = 0xE576516E;
  if (i) {
    printf("l_1179=%d\n", l);
  }
  p1 = (0x60781BCD >= m ^ 4294967287) - o;
  return p1;
}

int fn4() {
  if (fn3(1)) {
    ;
  }
}

int main() {
  fn4();
}
