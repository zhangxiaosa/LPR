#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return (unsigned)p2;
}

struct m {
  int n;
  int o;
};

unsigned q_l;
int r;
unsigned t;
int u;
unsigned v;

int fn2(unsigned p3_l) {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = u;
  r = t % (5 / ae);
  int unused_value = ad.o;
}

int main() {
  fn2(q_l);
}