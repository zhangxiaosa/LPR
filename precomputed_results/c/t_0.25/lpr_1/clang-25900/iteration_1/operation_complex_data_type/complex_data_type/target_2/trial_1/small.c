#include <stdio.h>

typedef long d;

unsigned fn1(unsigned p2) { return p2; }

struct m {
  int n;
  int o;
};

int r;
static int s = -5;
int t;

d fn4() {
  struct m p2 = {1957};
  p2.o = fn1(5);
  int ae;
  ae = p2.o;
  p2.o = r;
  r = t % (~s / ae);
  p2.o;
}

int main() { fn4(); }
