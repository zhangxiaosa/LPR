#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = 0;

  // Variable 'r' has been optimized out
  
  // Removed: r = t % (4 / ae);
  
  // Removed: ad.o;

  return 0;
}