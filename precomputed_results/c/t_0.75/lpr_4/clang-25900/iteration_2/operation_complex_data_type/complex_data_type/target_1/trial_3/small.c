#include <stdio.h>

unsigned int fn1(unsigned int p2) {
  return p2;
}

struct m {
  int n;
  int o;
};

int r;
unsigned int t;

int main() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(5);
  
  int ae;
  ae = ad.o;
  
  ad.o = 5;
  
  r = t % (5 / ae);
  
  int ad_o = ad.o;
  
  return 0;
}