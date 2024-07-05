
long fn2() {
  struct h p;
  int q;
  fn1(p);
  for (;;) {
    struct h r;
    r = p;
  }
}
