
#include <stdio.h>

int n = 18;
int o = 1;
int r;
int s = -5L;

int fn4_inlined(int p1) {
  int ae = p1;
  int ad = 1957;
  ad = ad & (~s / ae);
  r = ad % ad;
  return ae;
}

int main() {
  fn4_inlined(5);
  return 0;
}
