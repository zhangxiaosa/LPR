#include <stdint.h>

unsigned int fn1(unsigned int p1, int p2) {
  return (unsigned int)p2;
}

struct m {
  signed int n;
  signed int o;
};

int r;
static signed int s = -5;
int t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5U, 5);
  signed int ae;
  ae = (signed int)ad.o;
  ad.o = u;
  r = t % (~(unsigned int)s / ae);
  ad.o;
}