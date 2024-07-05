
#include <iostream>

typedef int c;
typedef unsigned g;
struct m {
  signed n : 18;
  signed o : 1;
};
c r;
static int s = -5L;
g t;
c u;
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}
int main() { fn4_inlined(5); }
