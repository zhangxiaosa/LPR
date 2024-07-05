#include <iostream>

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = static_cast<signed>(fn1(v, 5));
  int ae;
  int af = t;
  ae = static_cast<int>(ad.o);
  ad.o = static_cast<signed>(u);
  r = af % (~static_cast<unsigned>(s) / ae);

  return 0;
}