struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1() {
w:
  goto w;
}

unsigned fn2() {
  fn1();
  for (;;) {
    // Empty loop
  }
}