typedef short a;

typedef int b;

typedef long c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1(a, g, d, struct h);

e fn2(p1) {
  struct h p;
  b q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(a p2, g p3, d p4, struct h p5) {
  w:
    goto w;
}

int main() {}