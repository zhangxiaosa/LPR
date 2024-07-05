
#include <stdio.h>

typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct k {
  unsigned l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

signed p;

struct k q;

int r;

static signed s = -5L;

g t;

int u;

g v;

signed fn2(signed, struct m, struct k, struct k, int);

int main() { fn2(p, q, q, q.l); }

signed fn2(signed p1, struct m p2, struct k p3, struct k p4, int p5) {
  unsigned ad_l = 1957;
  unsigned ad_o = fn1(v, 5);
  unsigned ae = ad_o;
  int af = t;
  ae = ad_o;
  ad_o = u;
  r = af % (~s / ae);
  ad_o;
}
