#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

long fn4() {
  int ae;
  ae = fn1(v, 5);
  ae = u;
  r = t % (~s / ae);
}

int main() {
  fn4();
}