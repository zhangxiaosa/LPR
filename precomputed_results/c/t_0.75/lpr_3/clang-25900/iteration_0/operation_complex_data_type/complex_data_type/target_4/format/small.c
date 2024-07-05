#include <stdio.h>

unsigned fn1(unsigned p1, int p2) { return p2; }

struct k {
  unsigned l;
};

struct m {
  int n : 18;
  int o : 1;
};

int p;
struct k q;
unsigned q_l;  // Decomposed member 'l' of struct 'k'
int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn2(int p1, struct m p2, unsigned p3_l, unsigned p4_l, int p5) {
  int ad_n; // Decomposed member 'n' of struct 'm'
  int ad_o; // Decomposed member 'o' of struct 'm'

  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  struct m z;
  fn2(p, z, q_l, q_l, q_l);
}