typedef short a;

typedef unsigned f;
typedef unsigned g;

struct h {
  unsigned k;
};

d l;

static struct h fn1(f, g, struct h);

e fn2() {
  struct h p;
  fn1(l, 3, p);
  for (;;) {
    p = p;
  }
}

struct h fn1(f p1, struct h p5) {
  p5.k;
w:
  goto w;
}
