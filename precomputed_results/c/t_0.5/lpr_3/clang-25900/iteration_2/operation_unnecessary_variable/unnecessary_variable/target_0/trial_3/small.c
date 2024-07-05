#include <iostream>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int r;
unsigned t;

int main() {
  unsigned ad_o = fn1(0, 5);  // Propagate the value of ad.o
  signed ae = ad_o;           // Use the propagated value
  r = t % (5 / ae);
}
