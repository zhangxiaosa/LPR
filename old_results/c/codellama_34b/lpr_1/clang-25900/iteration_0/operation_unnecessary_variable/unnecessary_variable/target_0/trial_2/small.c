
typedef unsigned g;
unsigned fn1(unsigned p1, int p2) { return p2; }
struct k {
  unsigned l;
};
struct m {
  signed n : 18;
  signed o : 1;
};
signed p;
struct k q;
int r;
static signed s = -5L;
g t;
int u;
g v;
signed fn2(signed, struct m, struct k, struct k, int);
signed fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}
signed fn2(signed p1, struct m p2, struct k p3, struct k p4, int p5) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~-5L / ae);
  ad.o;
}
int main() { fn4(); }
