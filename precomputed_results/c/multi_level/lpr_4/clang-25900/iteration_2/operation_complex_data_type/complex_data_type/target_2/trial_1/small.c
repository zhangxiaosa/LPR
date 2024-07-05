#include <stdlib.h>

int fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  // Primary data type variables
  int n;
  int o;
  int r;
  static int s = -5L;
  int t;
  int u;
  int ae;

  // struct m decomposition
  struct m {
    int n : 18;
    int o : 1;
  };

  // Derived struct m variables
  struct m p2;
  p2.n = 1957;

  // Assignments
  p2.o = fn1(5, 5);
  ae = p2.o;
  p2.o = u;
  r = t % (~s / ae);

  return 0;
}