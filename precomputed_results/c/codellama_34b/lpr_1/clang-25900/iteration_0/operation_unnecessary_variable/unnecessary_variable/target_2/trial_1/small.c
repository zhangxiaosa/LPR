
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
  fn2(p, {1957}, q, q, q.l);
}
signed fn2(signed p1, struct m p2, struct k p3, struct k p4, int p5) {
  p2.o = fn1(v, 5);
  int ae = u;
  r = ae % (~s / p2.o);
  p2.o;
}
int main() { fn4(); }
