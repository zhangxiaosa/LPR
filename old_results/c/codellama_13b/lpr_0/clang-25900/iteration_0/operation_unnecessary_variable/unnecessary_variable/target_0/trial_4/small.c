
typedef int e;
typedef int a;
typedef int b;
typedef int c;
typedef long d;
e fn1(e p1, int p2) { return p2; }
struct k {
  int l;
};
struct m {
  int n : 18;
  int o : 1;
};
// a p; -- unused, can be removed
struct k q;
c r;
static a s = -5L;
unsigned t;
c u;
unsigned v;
// a fn2(a, struct m, struct k, struct k, c); -- unused, can be removed
b fn3(unsigned);
d fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}
b fn3(unsigned p1) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
int main() { fn4(); }
