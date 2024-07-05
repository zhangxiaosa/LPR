#include <stdio.h>

unsigned fn1(unsigned p2) { return p2; }

struct m {
  int n : 18;
  int o;
};

int r;
static signed s = -5;
unsigned t;
int u;

void fn4() {
  struct m ad = {.n = 1957};
  ad.o = fn1((unsigned)5);
  signed ae;
  ae = (signed)ad.o;
  r = t % (~s / (unsigned)ae);
}

int main() {
  fn4();
}