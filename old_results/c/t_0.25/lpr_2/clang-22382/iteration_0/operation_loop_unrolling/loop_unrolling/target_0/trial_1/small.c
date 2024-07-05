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
  fn1(q, l, p1, 3, p);

  // Loop unrolling
  struct h r;

  // Iteration 1
  p = r = p;

  // Iteration 2
  p = r = p;

  // Iteration 3
  p = r = p;

  // Iteration 4
  p = r = p;

  // End of loop unrolling

}

struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
