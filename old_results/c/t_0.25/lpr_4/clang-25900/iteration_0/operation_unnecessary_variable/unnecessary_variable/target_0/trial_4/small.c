typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

c r;
static signed s = -5L;
g t;
c u;
g v;

d fn4() {
  signed ae;
  c af = t;
  ae = fn1(v, 5);
  r = af % (~s / ae);
}

int main() {
  fn4();
}