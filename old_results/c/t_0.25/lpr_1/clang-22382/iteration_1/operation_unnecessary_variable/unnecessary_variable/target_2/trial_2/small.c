struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k is unused and can be optimized out
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    // p = r = p is redundant and can be optimized out
  }
}

int main() {}
