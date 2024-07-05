struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1, struct original_data_type p5) {
  // No usage of p5.k, optimized out.
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, p);
  while (1) {
    struct original_data_type r;
    r = p;
  }
}

int main() {}
