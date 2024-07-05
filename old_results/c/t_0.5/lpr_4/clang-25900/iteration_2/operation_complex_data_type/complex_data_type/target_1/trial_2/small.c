#include <stdio.h>

int fn1(int p1, int p2) {
  return p2;
}

int main() {
  int n;
  int o;
  int r;
  static int s = -5L;
  int t;

  int ad_n = 1957;
  int ad_o;

  ad_o = fn1(5, 5);
  int ae = ad_o;
  ad_o = 5;
  r = t % (~s / ae);

  printf("ad_n: %d\n", ad_n);
  printf("ad_o: %d\n", ad_o);

  return 0;
}