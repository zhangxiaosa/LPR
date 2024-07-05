#include <stdio.h>

unsigned t;
int u;
unsigned v;
int r;
static signed s = -5L;

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

long fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  r = t % (~s / ad.o);
  ad.o;
}

int main() {
  fn4();
}