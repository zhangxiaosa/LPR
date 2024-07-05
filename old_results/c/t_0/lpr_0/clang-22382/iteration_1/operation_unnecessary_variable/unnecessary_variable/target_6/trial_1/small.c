typedef short a;

typedef long c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

struct h {
  int i;
  c j;
  int k;
};

d l;

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

e fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = p;
  }
}

int main() {}
