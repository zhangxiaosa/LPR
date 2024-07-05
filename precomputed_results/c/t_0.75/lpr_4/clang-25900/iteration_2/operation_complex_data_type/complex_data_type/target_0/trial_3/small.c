#include <iostream>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n;
  int o;
};

int main() {
  int n_value = 1957;
  int o_value;
  int r;
  unsigned t;

  struct m ad;
  ad.n = n_value;

  o_value = fn1(5);
  ad.o = o_value;

  signed ae;
  ae = ad.o;

  ad.o = 5;

  r = t % (5 / ae);

  // ad.o; // expression removed as it is unused

  return 0;
}