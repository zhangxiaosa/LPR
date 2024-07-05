#include <stdio.h>

typedef signed int a;
typedef short int b;
typedef int c;
typedef long int d;
typedef unsigned int e;
typedef unsigned int f;
typedef unsigned int g;

e fn1(e p1, int p2) {
  return p2;
}

struct k {
  f l;
};

struct m {
  signed int n : 18;
  signed int o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

d fn4() {
  struct m z;
  struct m ad = {1957};

  ad.o = fn1(v, 5);

  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  struct m z;
  struct k q;

  struct m ad = {1957};
  ad.o = fn1(v, 5);

  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
