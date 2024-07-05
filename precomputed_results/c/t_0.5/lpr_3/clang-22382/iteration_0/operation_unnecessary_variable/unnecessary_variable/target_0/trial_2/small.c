struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p4, struct h p5) {
  p5.k;
}

unsigned fn2() {
  struct h p;
  fn1(0, l, 0, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}