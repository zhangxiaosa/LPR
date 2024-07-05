
unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    p = p;
  }
}
