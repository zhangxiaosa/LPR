#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

int r;
unsigned t;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = 5;
  r = t % (5 / ad.o);

  return 0;
}