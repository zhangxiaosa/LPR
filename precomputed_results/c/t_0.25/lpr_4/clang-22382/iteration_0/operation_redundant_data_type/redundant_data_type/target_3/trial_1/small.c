typedef unsigned d;
typedef unsigned e;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

d l;

static struct h fn1(unsigned, short, g, d, struct h);

e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}.