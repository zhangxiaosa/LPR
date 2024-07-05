int fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

void fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = p;
  }
}