#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  r = t % 1;
}
