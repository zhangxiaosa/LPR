typedef unsigned f;

typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(f, short, g, unsigned);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  p4;
w:
  goto w;
}

int main() {}
