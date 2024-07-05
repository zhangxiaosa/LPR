
#include <stdio.h>

typedef unsigned int uint;
typedef signed int sint;

uint fn1(uint p1, sint p2) {
  return p2;
}

struct m {
  sint n : 18;
  sint o : 1;
};

int r;
sint s = -5L;
int u;

sint fn4() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  sint ae;
  int af = u;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}
