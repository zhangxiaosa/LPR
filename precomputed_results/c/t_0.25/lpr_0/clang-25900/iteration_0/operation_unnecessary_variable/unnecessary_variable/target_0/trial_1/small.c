typedef signed a;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

c r;
static a s = -5L;
g t;
c u;
g v;

d fn4() {
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af = t;
  ae = u;
  r = af % (~s / ae);
}

int main() {
  fn4();
}