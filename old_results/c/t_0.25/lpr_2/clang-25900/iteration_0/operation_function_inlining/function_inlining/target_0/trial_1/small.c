typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct k {
  f l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

struct k q;
c r;
g t;
c u;

a fn2(a, struct m, struct k, struct k, c);

b fn3(g);

d fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}

a fn2(a p1, struct m p2, struct k p3, struct k p4,
               c p5) {
  fn3(p5);
}

b fn3(g) {
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~(-5L) / ae);
}

int main() { fn4(); }
