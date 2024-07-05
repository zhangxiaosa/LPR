struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k is optimized out
  p5;
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  // q is optimized out
  fn1(3, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
