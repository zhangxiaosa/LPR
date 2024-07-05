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
  signed o : 1;
};

struct k q;

a fn2(a, struct m, struct k, struct k, c);
b fn3();

a fn2(a p1, struct m p2, struct k p3, struct k p4, c p5) {
  fn3();
}

b fn3() {
  struct m ad = {1957};
  ad.o = 5;
  a ae;
  c af;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
}

int main() {
  fn2();
}