#include <stdio.h>

unsigned int fn1() { return 5; }

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };

  struct m ad = {1957};
  ad.o = fn1();
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}