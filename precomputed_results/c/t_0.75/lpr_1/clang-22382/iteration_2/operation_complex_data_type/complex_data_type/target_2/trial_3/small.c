struct H {
  unsigned k;
};

static struct H fn1(struct H p5) {
  return p5;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  while (1) {
    struct H r;
    p = r;
  }
}