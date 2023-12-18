#include <stdio.h>

typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

g t = 0;
unsigned v = 0;

int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  int ae = ad.o;
  ad.o = 5;
  r = 0 % (~s / ae);
}