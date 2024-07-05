#include <stdio.h>

unsigned fn1(unsigned p1) {
  return p1;
}

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = fn1(5);
  ad.o = u;
  r = t % (~s / 5);
  ad.o;
}
