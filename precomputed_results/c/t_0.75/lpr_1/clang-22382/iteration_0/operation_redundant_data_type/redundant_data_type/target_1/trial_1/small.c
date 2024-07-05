typedef int b;

typedef long c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);

  for (;;) {
    struct h r;

    p = r;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {

  w:
    ;

  goto w;
}