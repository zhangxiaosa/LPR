#include <iostream>

int fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int t;
int u;

int main() {
  struct m p2 = {1957};
  p2.o = fn1(5, 5);
  int ae = 5; // constant propagation
  p2.o = u;
  r = t % (~s / ae);
}
