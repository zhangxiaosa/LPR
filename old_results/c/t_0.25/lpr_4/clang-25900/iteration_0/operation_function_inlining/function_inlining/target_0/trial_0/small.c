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

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

a fn2(a p1, struct m p2, struct k p3, struct k p4, c p5) {
  struct m ad = {1957};
  ad.o = v;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

b fn3(g p1) {
  struct m ad = {1957};
  ad.o = v;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

d fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}

int main() {
  fn4();
}