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
c r;
static a s = -5L;
g t;
c u;
g v;

d fn4() {
  struct m p2;
  p2.o = 5;
  r = t % (~s / p2.o);
}

int main() {
  fn4();
}