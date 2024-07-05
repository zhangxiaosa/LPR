
unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r;
  }
}
