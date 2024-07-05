typedef signed a;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(unsigned p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

c r;
static signed s = -5L;
g t;
c u;
g v;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  ae = (signed)ad.o;
  ad.o = (int)u;
  r = t % (~(signed)s / ae);
}

int main() {
  fn4();
}