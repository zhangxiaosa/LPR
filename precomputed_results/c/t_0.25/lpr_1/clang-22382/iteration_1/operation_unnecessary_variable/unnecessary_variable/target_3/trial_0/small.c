struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k; (removed)
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    // p = r = p; (simplified to p = p; and removed)
  }
}

int main() {}
