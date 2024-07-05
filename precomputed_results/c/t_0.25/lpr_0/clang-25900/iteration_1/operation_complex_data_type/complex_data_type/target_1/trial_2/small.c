typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  int n;
  int o;
};

c r;
static signed s;
g t;
c u;
g v;

d fn4() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(v, 5);
  int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}