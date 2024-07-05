#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

int o_0 = 0xE576516E;

int fn3(int p1) {
  int l;
  short m = 0x809C;

  p1 = fn2(0x60781BCD >= m ^ 4294967287, o_0);

  return p1;
}

int main() {
  fn3(1);

  return 0;
}
