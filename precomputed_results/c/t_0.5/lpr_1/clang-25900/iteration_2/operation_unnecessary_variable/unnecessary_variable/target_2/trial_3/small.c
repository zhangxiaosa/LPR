#include <stdio.h>

int r;
static signed s = -5L;
unsigned t;
int u;

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = fn1(5, 5);
  signed ae = 5;
  ad.o = u;
  r = t % (4 / ae);
  ad.o;
}
