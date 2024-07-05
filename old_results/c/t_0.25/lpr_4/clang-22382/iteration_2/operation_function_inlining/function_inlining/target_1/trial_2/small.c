struct h {
  int i;
  int k;
};

static struct h fn1(struct h p6) {
  p6.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
}
