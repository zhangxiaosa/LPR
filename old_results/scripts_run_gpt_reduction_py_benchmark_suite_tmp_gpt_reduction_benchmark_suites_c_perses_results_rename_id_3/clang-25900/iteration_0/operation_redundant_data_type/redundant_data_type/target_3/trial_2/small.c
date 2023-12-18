#include <stdio.h>

unsigned int g;

unsigned int fn1(unsigned int p1, int p2);

struct m {
  signed int n : 18;
  signed int o : 1;
};

int main() {
  int r;
  static signed int s = (signed int)-5L;
  unsigned int t;
  int u;
  unsigned int v;
  struct m ad = {123};

  ad.o = (unsigned int)fn1(v, 5);
  signed int ae;
  int af = t;

  ae = ad.o;
  ad.o = u;
  r = af % ((unsigned int)~s / (unsigned int)ae);

  printf("%d\n", ad.o);

  return 0;
}

unsigned int fn1(unsigned int p1, int p2) {
  return (unsigned int)p2;
}