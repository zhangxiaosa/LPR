typedef unsigned f;

typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(f, short, g, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  struct h r;
  p = r = p;
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}