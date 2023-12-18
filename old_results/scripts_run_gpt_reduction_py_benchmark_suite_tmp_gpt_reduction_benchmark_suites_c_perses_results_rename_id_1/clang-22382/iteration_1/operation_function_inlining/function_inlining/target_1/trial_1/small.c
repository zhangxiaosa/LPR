struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

void fn2() {
  struct h p;
  p.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}