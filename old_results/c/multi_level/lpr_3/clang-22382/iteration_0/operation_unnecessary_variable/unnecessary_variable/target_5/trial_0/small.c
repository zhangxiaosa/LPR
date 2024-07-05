struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p4, struct h p5) {
  goto w;
}

int fn2() {
  struct h p;
  fn1(0, 3, p);
  for (;;) {
    struct h r;
    p = r;
  }
}