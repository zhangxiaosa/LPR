#include <stdio.h>

int fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  int n;
  int o;

  int r;
  static int s = -5L;
  int t;
  int u;
  int ae;

  struct m {
    int n : 18;
    int o : 1;
  };

  struct m p2 = {1957};
  p2.o = fn1(5, 5);
  ae = p2.o;
  p2.o = u;
  r = t % (~s / ae);

  // Removed unnecessary statement p2.o;

  return 0;
}