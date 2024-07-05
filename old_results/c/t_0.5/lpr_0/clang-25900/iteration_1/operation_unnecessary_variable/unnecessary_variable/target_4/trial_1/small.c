#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

unsigned fn1() { return 5; }

int main() {
  struct m ad = {1957};
  ad.o = fn1();
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}
