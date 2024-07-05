unsigned fn2() {
  struct h p;
  p.k;
w:
  goto w;
  for (;;) {
    struct h r1 = p;
    p = r1;
  }
}