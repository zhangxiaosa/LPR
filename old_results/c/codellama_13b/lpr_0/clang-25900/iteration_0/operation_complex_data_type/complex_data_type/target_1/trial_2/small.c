c
typedef int e;
typedef int a;
typedef int b;
typedef long d;
e fn1(e p1, int p2) { return p2; }
struct k {
  int l;
};
struct m {
  int n : 18;
  int o : 1;
};
a p;
struct k q;
d r;
static a s = -5L;
unsigned t;
d u;
unsigned v;
a fn2(a, struct m, struct k, struct k, d);
b fn3(unsigned);
d fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}
a fn2(a p1, struct m p2, struct k p3, struct k p4, d p5) { fn3(p5); }
b fn3(unsigned p1) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  d ae;
  d af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
int main() { fn4(); }
