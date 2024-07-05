static int fn1();

unsigned fn2() {
  int p_i;
  fn1(p_i);
  for (;;) {
    int r;
    p_i = r = p_i;
  }
}

int fn1(int p5) {
  p5;
w:;
  goto w;
}