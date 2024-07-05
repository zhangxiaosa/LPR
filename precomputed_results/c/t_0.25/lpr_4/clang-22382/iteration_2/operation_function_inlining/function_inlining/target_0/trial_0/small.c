struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}