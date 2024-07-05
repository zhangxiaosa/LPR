#include <stdio.h>

typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned ad = {1957};
ad.o = fn1(unsigned, 5);

signed ae;
int af = unsigned;
ae = ad.o;
ad.o = int;

int main() {
  struct m ad = {1957};
  ad.o = fn1(unsigned, 5);
  signed ae;
  int af = unsigned;
  ae = ad.o;
  ad.o = int;
  int r = af % (~-5L / ae);
  ad.o;
}