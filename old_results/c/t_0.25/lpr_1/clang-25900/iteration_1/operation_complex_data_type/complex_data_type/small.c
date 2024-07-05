#include <stdio.h>

typedef long d;

unsigned fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;

d fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  signed ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() {
  int m_n;
  int m_o;

  fn4();
}