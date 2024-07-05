#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct k {
  f l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
  struct m ad2 = {1957};
  ad2.o = 5;
  a ae2;
  c af2 = t;
  ae2 = ad2.o;
  ad2.o = u;
  r = af2 % (~s / ae2);
  ad2.o;
  struct m ad3 = {1957};
  ad3.o = 5;
  a ae3;
  c af3 = t;
  ae3 = ad3.o;
  ad3.o = u;
  r = af3 % (~s / ae3);
  ad3.o;
}