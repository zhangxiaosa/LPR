struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k is not used - optimized out
  w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = p; // simplified assignment
  }
}

int main() {}
