
#include <stdio.h>

int n = 18;
int o = 1;
int r;
int s = -5L;

int fn4_inlined(int p1) {
  int ad = 1957;
  int ae = ad / p1;
  ad = 0;
  r = ae % (~s / ae);
  return ad;
}

int main() {
  fn4_inlined(5);
  return 0;
}
