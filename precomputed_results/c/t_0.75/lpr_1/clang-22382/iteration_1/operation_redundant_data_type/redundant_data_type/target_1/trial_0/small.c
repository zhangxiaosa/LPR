unsigned l;

static unsigned fn1(unsigned, short, unsigned);

unsigned fn2() {
  unsigned p;
  int q;
  fn1(q, l, p);
  for (;;) {
    unsigned r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p5) {
  p5;
w:;
  goto w;
}