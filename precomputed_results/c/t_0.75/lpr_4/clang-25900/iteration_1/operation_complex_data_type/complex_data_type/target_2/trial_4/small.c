#include <stdio.h>

unsigned int fn1(unsigned int p1, int p2) { return p2; }

struct m {
  signed int n;
  signed int o;
};

int r;
static signed int s;
unsigned int t;

int main() {
  struct m ad;
  unsigned int return_value;
  signed int ae;

  ad.n = 1957;
  ad.o = fn1(5, 5);

  ae = ad.o;
  ad.o = 5;
  r = t % (5 / ae);

  return 0;
}