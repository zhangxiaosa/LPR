#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

long fn4() {
  struct m p2 = {1957};
  p2.o = 5;
  p2.o = r;
  r = r % (~s / p2.o);
}

int main() {
  fn4();
}