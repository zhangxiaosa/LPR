#include <stdio.h>

int fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn4() {
  struct m p2 = {1957};
  p2.o = fn1(v, 5);
  int ae;
  int af = t;
  ae = p2.o;
  p2.o = u;
  r = af % (~s / ae);
  p2.o;
}

int main() {
  fn4();
}
