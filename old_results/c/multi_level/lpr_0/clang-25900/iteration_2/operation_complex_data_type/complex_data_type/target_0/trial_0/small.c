#include <iostream>

int r;
static int s = -5L;
unsigned t;

unsigned fn1(p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  int ad_n = 1957;  // ad.n
  int ad_o;        // ad.o

  ad_o = fn1(5);

  int ae = ad_o;   // Use ad.o (ad_o) instead of ad.o

  ad_o = 0;

  r = t % (~s / ae);

  return ad_o;     // Use ad.o (ad_o) instead of ad.o
}

int main() {
  fn4();
}