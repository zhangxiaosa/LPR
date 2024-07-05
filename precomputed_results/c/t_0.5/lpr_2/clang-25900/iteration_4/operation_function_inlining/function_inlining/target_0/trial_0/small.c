#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;

int main() {
  struct m ad = {1957, 5};
  signed ae;
  ae = ad.o;
  ad.o = ad.o;
  r = 4 % (~s / ae);
  p2;
}
