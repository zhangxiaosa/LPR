#include <stdio.h>

unsigned fn1(unsigned p2) { return p2; }

struct m {
  signed int n;
  signed int o;
};

int r;
static signed long s = -5L;
int t;

typedef long d;

d fn4() {
  struct m p2 = {1957, 0};
  p2.o = fn1(5);
  signed int ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  return p2.o;
}

int main() {
  fn4();
  return 0;
}