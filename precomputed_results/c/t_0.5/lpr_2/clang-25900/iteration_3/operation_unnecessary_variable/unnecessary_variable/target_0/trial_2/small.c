#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
  r = t % (~s / fn1(5));
}