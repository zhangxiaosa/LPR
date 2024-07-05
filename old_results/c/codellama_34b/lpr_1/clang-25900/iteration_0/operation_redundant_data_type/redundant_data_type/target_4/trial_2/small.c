
#include <stdio.h>

unsigned int fn1(unsigned int p1, int p2) { return p2; }
struct k {
  unsigned int l;
};
struct m {
  signed int n : 18;
  signed int o : 1;
};
signed int p;
struct k q;
int r;
static signed int s = -5L;
unsigned int t;
int u;
unsigned int v;
signed int fn2(signed int, struct m, struct k, struct k, int);
signed int fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}
signed int fn2(signed int p1, struct m p2, struct k p3, struct k p4, int p5) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
int main() { fn4(); }
