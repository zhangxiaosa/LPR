struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // No need to initialize `p5_k` as it is not used
w:
  goto w;
}

int fn2() {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
