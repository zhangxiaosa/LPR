unsigned fn2() {
  struct h p;
  for (;;) {
    p.k;
  }
  for (;;) {
    struct h r;
    p = r = p;
  }
}