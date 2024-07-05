
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p3, int p4, struct h p5) {
  p5.k;
  for (;;) {
    struct h r;
    r = p5;
  }
}

int fn2() {
  fn1(3, 3, 3, 3);
  for (;;) {
    struct h r;
    r = 3;
  }
}
