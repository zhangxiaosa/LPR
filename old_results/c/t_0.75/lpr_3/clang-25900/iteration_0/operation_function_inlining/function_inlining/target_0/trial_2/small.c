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

a fn2(a, struct m, struct k, struct k, c);
b fn3(g);
d fn4() {
  struct m z;
  fn2(p, z, q, q, q.l);
}

a fn2(a p1, struct m p2, struct k p3, struct k p4,
               c p5) {
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
  ad.o = 5;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  struct m z;
  struct k q;
  struct k q_2;
  q_2.l = q.l;
  struct k q_3;
  q_3.l = q.l;
  struct k q_4;
  q_4.l = q.l;
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}