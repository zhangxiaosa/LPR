#include <stdio.h>

typedef struct {
  signed int n : 18;
  signed int o : 1;
} m;

int fn1(int p1, int p2) {
  return p2;
}

int main() {
  int t;
  int u;
  int v;
  m ad = {1957};
  ad.o = fn1((unsigned)v, 5);
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  int r;
  signed int s = -5;
  r = af % (~s / ae);
  ad.o;
}
