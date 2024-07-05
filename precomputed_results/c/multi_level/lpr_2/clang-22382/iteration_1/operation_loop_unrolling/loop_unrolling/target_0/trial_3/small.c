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

static struct h fn1();

e fn2(p1) {
  struct h p;
  fn1(l, p1, 3, p);

  // Loop unrolling factor: 4
  struct h r1, r2, r3, r4;

  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;

  return 0;
}

struct h fn1(f p1, g p3, d p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
