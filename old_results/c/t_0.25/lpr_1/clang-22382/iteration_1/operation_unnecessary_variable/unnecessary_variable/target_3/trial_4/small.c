struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  // p5.k;  // Optimized out
  w:
  goto w;
}

unsigned fn2() {
  // struct h p;  // Optimized out
  fn1(0, {});  // Optimized out
  for (;;) {
    struct h r;
    r = {};  // Copy propagation
  }
}

int main() {}
