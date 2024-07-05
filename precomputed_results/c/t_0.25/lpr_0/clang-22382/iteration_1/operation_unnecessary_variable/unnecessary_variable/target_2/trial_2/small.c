struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k; (removed)
  w:
    goto w;
}

unsigned fn2() {
  // struct h p; (removed)
  fn1(0, p);
  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}
