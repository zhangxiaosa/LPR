
#include <stdio.h>

int n;
int o;
int r;
int s = -5L;

int fn4_inlined(int p1) {
  n = 1957;
  o = p1;
  int ae = o;
  o = 0;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
