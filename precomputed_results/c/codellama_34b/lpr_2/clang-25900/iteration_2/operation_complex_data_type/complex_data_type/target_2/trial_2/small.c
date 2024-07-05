
#include <stdio.h>

int r;
static int s = -5L;

int fn4_inlined(int p1) {
  int n = 1957;
  int o = p1;
  int ae = o;
  o = 0;
  r = ae % (~s / ae);
  return o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
