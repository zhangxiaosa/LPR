struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5);

unsigned fn2() {
  struct h p;
  fn1(p);
}

struct h fn1(struct h p5) {
w:;
  goto w;
}