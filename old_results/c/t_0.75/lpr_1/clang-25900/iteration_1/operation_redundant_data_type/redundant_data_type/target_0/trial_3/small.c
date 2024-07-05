#include <stdio.h>

struct m {
  int n : 18;
  unsigned o : 1;
};

int r;
static signed s = -5;
unsigned t = 0;

unsigned fn1(unsigned p2) {
  return p2;
}

int main() {
  struct m ad = {1957};
  ad.o = (unsigned)fn1(5);
  signed ae;
  ae = (signed)ad.o;
  r = (unsigned)((unsigned)~s / ae);
}
