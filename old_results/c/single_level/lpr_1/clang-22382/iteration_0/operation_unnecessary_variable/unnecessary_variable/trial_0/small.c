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

static struct h fn1(f, short, g, d, struct h);

e fn2(p1) {
  struct h p;
  b q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(f, short, g, d, struct h) {
  // No usage of p1 in the function
  w:;
    goto w;
}

int main() {}
