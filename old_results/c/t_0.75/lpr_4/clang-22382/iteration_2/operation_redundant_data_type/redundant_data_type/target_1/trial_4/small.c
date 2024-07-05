static int fn1(unsigned p1, int p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  int p;
  fn1(3, p);
  for (;;) {
    int r;
    p = r = p;
  }
}