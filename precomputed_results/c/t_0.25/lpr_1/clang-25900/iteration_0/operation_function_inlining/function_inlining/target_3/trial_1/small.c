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

static a s = -5L;
c r;
c u;

d fn4() {
  struct m p2 = {1957};
  p2.o = 5;
  r = t % (~s / p2.o);
}

int main() {
  fn4();
}