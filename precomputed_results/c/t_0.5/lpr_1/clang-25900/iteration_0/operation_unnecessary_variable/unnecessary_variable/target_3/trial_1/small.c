#include <stdio.h>

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed o : 1;
};

int main() {
  struct m ad;
  ad.o = fn1(0, 5);
  signed ae;
  ae = ad.o;
  ad.o = 0;
  ad.o;
}
