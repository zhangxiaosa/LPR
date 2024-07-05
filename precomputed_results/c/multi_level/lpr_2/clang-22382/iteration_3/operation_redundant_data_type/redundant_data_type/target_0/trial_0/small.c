int fn1(int p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r1;
    p = r1 = p;
  }
}