
#include <stdio.h>
#include <stdint.h>

typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

signed n;
signed o;

signed p;

struct k q;

int r;

static signed s = -5L;

g t;

int u;

g v;

signed fn2(signed, signed, struct k, struct k, int);

signed fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}

signed fn2(signed p1, signed p2, struct k p3, struct k p4, int p5) {
  signed ad = 1957;
  ad = fn1(v, 5);
  signed ae;
  int af = t;
  ae = ad;
  ad = u;
  r = af % (~s / ae);
  ad;
}

int main() { fn4(); }
