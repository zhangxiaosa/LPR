#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct k {
  unsigned l;
};

struct m {
  int n;
  int o;
};

int p;
struct k q;
int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn2(int p1, int p2, struct m p3, struct k p4, int p5) {
  int ad_n; // Decomposed member 'n' of struct 'm'
  int ad_o; // Decomposed member 'o' of struct 'm'

  struct m ad = {1957};
  ad.o = p2;
  int af = t;
  r = af % (~s / ad.o);

  return ad.o;
}

int main() {
  struct m z;
  fn2(p, 0, z, q, q.l);  // Passing 0 as the value for p2 (target variable to be optimized)
}