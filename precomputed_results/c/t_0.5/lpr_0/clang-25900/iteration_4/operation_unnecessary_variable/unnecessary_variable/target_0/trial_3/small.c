#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  int ae;
  ae = fn1(0, 5);
  r = r % (~s / ae);
}
