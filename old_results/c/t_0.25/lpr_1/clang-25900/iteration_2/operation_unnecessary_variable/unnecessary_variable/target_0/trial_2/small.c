#include <stdio.h>

unsigned fn1(struct m p2) {
  return p2.o;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;

long fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  p2.o = r;
  r = t % (~s / r);
  p2.o;
}

int main() {
  fn4();
}