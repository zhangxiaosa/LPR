#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  r = t % (~s / fn1(5, 5));
}
