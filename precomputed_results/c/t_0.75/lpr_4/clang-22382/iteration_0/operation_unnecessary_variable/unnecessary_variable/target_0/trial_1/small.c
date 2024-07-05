unsigned l;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2() {
  struct h p;

  for (;;) {
    struct h r;
    p = r;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  goto w;
}
