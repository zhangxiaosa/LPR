static void fn1(int p5) {
  p5;
w:
  goto w;
}

void fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = 0;
  }
}