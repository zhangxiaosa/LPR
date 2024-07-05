struct h {
  int i;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    // p = r = p; (optimized out)
  }
}

int main() {}
