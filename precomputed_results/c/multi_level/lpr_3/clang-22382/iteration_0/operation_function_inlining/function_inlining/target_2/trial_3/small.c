typedef short a;

typedef int b;

typedef long c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1(f, a, g, d, struct h);

e fn2(p1) {
  struct h p;
  b q;
  p.q;  // an access to `p.q` was added to preserve usage of `p1`
  p.k;

w:;
  goto w;
}

struct h fn1(f p1, a p2, g p3, d p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {
  struct h p;
  b q;
  p.q;  // an access to `p.q` was added to preserve usage of `l`
  p.k;

w:;
  goto w;
}
