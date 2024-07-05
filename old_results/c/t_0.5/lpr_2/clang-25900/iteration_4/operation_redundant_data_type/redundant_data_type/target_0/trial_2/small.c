#include <stdio.h>

unsigned fn1(unsigned p2) { return p2; }

unsigned r;
static signed s = -5L;

int main() {
  struct {
    signed int n;
    signed int o;
  } ad = {1957, fn1(5)};

  signed int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = 4 % (~s / ae);
  ad.o;
}
