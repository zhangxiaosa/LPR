#include <iostream>

unsigned fn1(signed p2_n, signed p2_o) {
  return p2_o;
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
  signed ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}