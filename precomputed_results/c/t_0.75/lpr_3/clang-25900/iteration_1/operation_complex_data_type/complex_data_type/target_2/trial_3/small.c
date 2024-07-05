#include <stdio.h>

unsigned fn1(unsigned p1, int p2) { return p2; }

int p;
unsigned q_l;
int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int fn2(int p1, int p2_n, int p2_o, unsigned p3_l, unsigned p4_l, int p5) {
  int ad_n = p2_n;
  int ad_o = p2_o;
  ad_o = fn1(v, 5);
  int ae;
  int af = t;

  ae = ad_o;
  ad_o = u;
  r = af % (~s / ae);
  return ad_o;
}

int main() {
  int z_n;
  int z_o;
  fn2(p, z_n, z_o, q_l, q_l, q_l);
  return 0;
}
