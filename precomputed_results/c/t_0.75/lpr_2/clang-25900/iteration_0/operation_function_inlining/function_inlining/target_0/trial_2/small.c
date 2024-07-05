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
};

c r;

g t;

c u;

b fn3(g p1) {
  struct m ad = {1957};
  ad.o = 5;
  c af = t;
  ad.o;
}

void fn2(a p1, struct m p2, struct k p3, struct k p4,
               c p5) {
  fn3(p5);
}

void fn3(g p1) {
  struct m ad = {1957};
  ad.o = 5;
  c af = t;
  ad.o;
}

int main() {
  fn3();
}