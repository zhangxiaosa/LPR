#include <iostream>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = t % (~s / ae); // Optimized: replaced ae_temp with ae
  ad.o;
}