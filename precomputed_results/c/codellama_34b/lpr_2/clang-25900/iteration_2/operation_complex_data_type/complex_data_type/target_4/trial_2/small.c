
#include <stdio.h>

int r;
static int s = -5L;

int fn4_inlined(int p1) {
  int ad_n = 1957;
  int ad_o = p1;
  int ae = ad_o;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return ad_o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
