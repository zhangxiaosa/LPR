typedef short a;
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

e fn2(e p1) {
  struct h p;
  fn1(0, l, p1, 3, p);
  while (1) {
    // Infinite loop, no need to assign p and r to themselves.
  }
}

static struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  // Unused code removed.
  while (1) {
    // Infinite loop.
  }
}

int main() {
  return 0;
}