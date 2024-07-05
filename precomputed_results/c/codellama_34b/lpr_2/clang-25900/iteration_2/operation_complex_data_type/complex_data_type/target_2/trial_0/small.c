
#include <stdio.h>

int r;
static int s = -5L;

int fn4_inlined(int p1) {
  int ae = p1;
  int o = 0;
  r = ae % (~s / ae);
  return o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
